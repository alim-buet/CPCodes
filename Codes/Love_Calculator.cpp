#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t; // Read number of test cases

    for (int test = 1; test <= t; test++) {
        string s, t;
        cin >> s >> t;

        int m = s.size();
        int n = t.size();

        // Initialize DP tables
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        vector<vector<ll>> dp2(m + 1, vector<ll>(n + 1, 0));

        // Base cases for DP
        for (int i = 0; i <= m; i++) {
            dp[i][0] = i; // If t is empty, length is i
            dp2[i][0] = 1; // There's one way to arrange s alone
        }

        for (int j = 0; j <= n; j++) {
            dp[0][j] = j; // If s is empty, length is j
            dp2[0][j] = 1; // There's one way to arrange t alone
        }

        // Fill the DP tables
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (s[i - 1] == t[j - 1]) { // Match found
                    dp[i][j] = dp[i - 1][j - 1] + 1; // Take the matching character
                    dp2[i][j] = dp2[i - 1][j - 1]; // Count unique combinations for matching
                }
                else { // No match
                    dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + 1; // Take the shorter one

                    // Count the unique combinations
                    if (dp[i][j - 1] == dp[i - 1][j]) {
                        dp2[i][j] = dp2[i - 1][j] + dp2[i][j - 1]; // Both paths lead to the same length
                    }
                    else if (dp[i][j - 1] < dp[i - 1][j]) {
                        dp2[i][j] = dp2[i][j - 1]; // Only take from the left
                    }
                    else {
                        dp2[i][j] = dp2[i - 1][j]; // Only take from above
                    }
                }
            }
        }

        // The result length is the last element in dp table
        // The unique count is the last element in dp2 table
        cout << "Case " << test << ": " << dp[m][n] << " " << dp2[m][n] << endl;
    }

    return 0;
}
