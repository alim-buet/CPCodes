#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n;cin >> n;
    vi arr(n);
    for (int i = 0;i < n;i++) cin >> arr[i];
    vi dp(n + 1);
    dp[n] = 0;
    dp[n - 1] = 1;
    for (int i = n - 2;i >= 0;i--) {
        dp[i] = dp[i + 1] + 1;
        if (i + 1 + arr[i] < n) {
            dp[i] = min(dp[i], dp[i + 1 + arr[i]]);
        }

        else if (i + 1 + arr[i] == n) dp[i] = 0;

    }
    cout << dp[0] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}