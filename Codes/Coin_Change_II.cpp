#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {

}

int main() {
    int t;
    cin >> t;
    for (int test = 1;test <= t;test++) {
        int n, k;cin >> n >> k;
        int dp[k + 1][n + 1];
        //dp[i][j] - i amount jth index porjonto coins niye banate chaile way
        vi coins(n + 1);
        for (int i = 1;i <= n;i++) cin >> coins[i];
        for (int i = 0;i <= n;i++) {
            dp[0][i] = 1;
        }

        for (int am = coins[1];am <= k;am += coins[1]) {
            dp[am][1] = 1;
        }
        int mod = 100000007;
        for (int am = 0;am <= k;am++) dp[am][0] = 0;
        for (int c_cnt = 1;c_cnt <= n;c_cnt++) {
            for (int am = 1;am <= k;am++) {
                int notTake = dp[am][c_cnt - 1];
                int Take = 0;
                if (am >= coins[c_cnt]) {
                    Take = dp[am - coins[c_cnt]][c_cnt];
                }
                dp[am][c_cnt] = (Take % mod + notTake % mod) % mod;
            }
        }
        cout << "Case " << test << ": " << dp[k][n] << endl;


    }
    return 0;
}