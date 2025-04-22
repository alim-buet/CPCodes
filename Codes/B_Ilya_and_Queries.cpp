#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    int dp[n + 5];
    dp[0] = 0;

    for (int i = 1; i < n ; i++)
    {
        if (s[i - 1] == s[i]) {
            dp[i] = dp[i - 1] + 1;

        }
        else {
            dp[i] = dp[i - 1];
        }


    }
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << dp[r - 1] - dp[l - 1] << endl;

    }

    return 0;
}