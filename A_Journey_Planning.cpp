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
    map<ll, ll> mp;
    for (int i = 1;i <= n;i++) {
        ll x;
        cin >> x;
        mp[x - i] += x;
    }
    ll maxans = -1;
    for (auto p : mp) {
        maxans = max(maxans, p.second);
    }
    cout << maxans << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}