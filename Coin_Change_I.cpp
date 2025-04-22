#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    for (int i = 1;i <= t;i++) {
        int n, amount;
        cin >> n >> amount;
        vi vals(n), counts(n);
        for (int i = 0; i < n; i++) cin >> vals[i];
        for (int i = 0; i < n; i++) cin >> counts[i];

        int mod = 100000007;
        vector<vector<int>> dp(n + 1, vector<int>(amount + 1, 0));

        // Base case: 0 amount can be made in 1 way (by choosing nothing)
        dp[0][0] = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= amount; j++) {
                // Not taking any coin from i-th type
                dp[i][j] = dp[i - 1][j];

                // Trying to take 1, 2, ..., counts[i-1] coins of i-th type
                for (int k = 1; k <= counts[i - 1] && k * vals[i - 1] <= j; k++) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - k * vals[i - 1]]) % mod;
                }
            }
        }

        cout << "Case " << i << ": " << dp[n][amount] << endl;
    }
    return 0;
}
