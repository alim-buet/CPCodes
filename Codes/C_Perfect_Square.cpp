#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        char s[n][n];
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> s[j][i];
            }
        }
        for (int j = 1; j <= n; ++j) {
            for (int i = 1; i <= n; ++i) {
                if (s[j - 1][i - 1] > s[i - 1][n - j]) {
                    ans += s[j - 1][i - 1] - s[i - 1][n - j];
                    s[i - 1][n - j] = s[j - 1][i - 1];
                }
                else if (s[j - 1][i - 1] < s[i - 1][n - j]) {
                    ans += s[i - 1][n - j] - s[j - 1][i - 1];
                    s[j - 1][i - 1] = s[i - 1][n - j];
                }
            }
        }
        for (int j = 1; j <= n; ++j) {
            for (int i = 1; i <= n; ++i) {
                if (s[j - 1][i - 1] > s[i - 1][n - j]) {
                    ans += s[j - 1][i - 1] - s[i - 1][n - j];
                    s[i - 1][n - j] = s[j - 1][i - 1];
                }
                else if (s[j - 1][i - 1] < s[i - 1][n - j]) {
                    ans += s[i - 1][n - j] - s[j - 1][i - 1];
                    s[j - 1][i - 1] = s[i - 1][n - j];
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}