#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<ll>
#define ll      long long
#define vl      vector<long long>
#define fori    for (ll i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;

    vector<pair<pair<ll, ll>, ll>> operations(m + 1); 
    vl arr(n + 1);
    for (ll i = 1; i <= n; i++) cin >> arr[i];

    for (ll i = 1; i <= m; i++) {
        ll l, r, d;
        cin >> l >> r >> d;
        operations[i].first.first = l;
        operations[i].first.second = r;
        operations[i].second = d;
    }

    vl operationsCount(m + 2, 0);
    while (k--) {
        ll x, y;
        cin >> x >> y;
        operationsCount[x]++;
        if (y + 1 <= m) operationsCount[y + 1]--; 
    }


    for (ll i = 1; i <= m; i++) {
        operationsCount[i] += operationsCount[i - 1];
    }

    vl diff(n + 2, 0); 
    for (ll o = 1; o <= m; o++) {
        ll l = operations[o].first.first;
        ll r = operations[o].first.second;
        ll d = operations[o].second * operationsCount[o];

        diff[l] += d;
        if (r + 1 <= n) diff[r + 1] -= d; 
    }

    for (ll i = 1; i <= n; i++) {
        diff[i] += diff[i - 1];
    }

    for (ll i = 1; i <= n; i++) {
        cout << arr[i] + diff[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
