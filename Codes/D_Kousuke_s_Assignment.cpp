#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    unordered_map<ll, int> mp;//last

    vector<int> dp(n + 1, 0);//dp[i] ith ind porjonto maxans

    ll presum = 0;
    mp[0] = -1;


    for (int i = 0; i < n; i++) {
        presum += arr[i];

        if (mp.find(presum) != mp.end()) {
            //i e end hoy
            dp[i + 1] = max(dp[i], dp[mp[presum] + 1] + 1);
        }
        else {
            dp[i + 1] = dp[i];
        }
        mp[presum] = i;
    }

    cout << dp[n] << endl;
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