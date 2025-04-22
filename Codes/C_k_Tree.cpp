#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n, k, d;cin >> n >> k >> d;
    vector<vector<ll>> dp(n + 1, vector<ll>(2, 0));
    const ll mod = 1000000007;
    //dp[i][0/1] means d er boro ba shoman niye/naNiye i sum form koto way te kora jay
    dp[0][0] = 1;
    dp[0][1] = 0;
    for (int s = 1;s <= n;s++) {
        for (int wt = 1;wt < d;wt++) {
            if (s - wt >= 0) {
                dp[s][0] = (dp[s][0]%mod+ (dp[s - wt][0]%mod))%mod;
                dp[s][1] =(dp[s][1]%mod+ (dp[s - wt][1]%mod))%mod;
            }

        }
        for (int wt = d;wt <= k;wt++) {
            if (s - wt >= 0) {
                dp[s][1] = (dp[s][1]%mod+ (dp[s - wt][0]%mod + dp[s - wt][1]%mod))%mod;

            }
        }
    }
    cout << dp[n][1] << endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}