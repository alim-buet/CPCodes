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
    for (int tes = 1;tes <= t;tes++) {
        int m, n;cin >> m >> n;
        vi digits(m);

        for (int i = 0;i < m;i++) cin >> digits[i];
        int dp[n + 1][10] = {};
        //dp[i][j] - i len er last digit j thakle count 
        for (int i = 0;i < m;i++) {
            dp[1][digits[i]] = 1;
        }
        for (int d = 2;d <= n;d++) {
            for (int i = 0;i < m;i++) {
                int count = 0;
                for (int j = 0;j < m;j++) {
                    if (abs(digits[i] - digits[j]) <= 2) {
                        count += dp[d - 1][digits[j]];
                    }
                }
                dp[d][digits[i]] = count;
            }
        }
        int ans = 0;
        for (int i = 0;i < m;i++) {
            ans += dp[n][digits[i]];
        }
        cout << "Case " << tes << ": " << ans << endl;
    }
    return 0;
}