#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int n;cin >> n;
    vector<ll> h_one(n), h_two(n);
    for (int i = 0;i < n;i++) cin >> h_one[i];
    for (int i = 0;i < n;i++) cin >> h_two[i];
    //dp[i][j] means if we consider player until ith index and we select a player from jth group then max height
    //j can be 0-not choosing any of them , 1 and 2
    vector<vector<ll>> dp(n + 1, vector<ll>(3, 0));
    dp[0][0] = 0;
    dp[0][1] = h_one[0];
    dp[0][2] = h_two[0];
    for (int i = 1;i < n;i++) {
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = h_one[i] + max(dp[i - 1][2], dp[i - 1][0]);
        dp[i][2] = h_two[i] + max(dp[i - 1][1], dp[i - 1][0]);

    }
    cout << max(max(dp[n - 1][0], dp[n - 1][1]), dp[n - 1][2]) << endl;

    return 0;
}