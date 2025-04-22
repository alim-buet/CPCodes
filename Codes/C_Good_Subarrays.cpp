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
    string s;cin >> s;

    unordered_map<ll, ll> mp;
    mp[0] = 1; //-1th index sum = 0;
    ll sum = 0;
    ll ans = 0;

    for (int i = 0;i < n;i++) {
        sum -= (s[i] - '0' - 1);
        ans += mp[sum];
        mp[sum]++;
    }
    cout << ans << endl;
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