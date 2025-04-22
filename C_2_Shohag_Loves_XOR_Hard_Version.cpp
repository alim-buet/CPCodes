#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    ll x, m;
    cin >> x >> m;
    ll lenNum = 64 - __builtin_clzll(x), total = 0;

    // Handle numbers with same number of bits as x
    for (ll i = 1; i < (1 << (lenNum - 1)); i++) {
        ll xo = x ^ i;
        if (xo % i == 0 || xo % x == 0) total++;
    }
    total++; // For i = 0

    ll next = 1 << lenNum;
    // Handle numbers with more bits than x
    while (next <= m) {
        for (ll i = next; i < (next << 1) && i <= m; i++) {
            ll xo = x ^ i;
            // Check if i is not a multiple of x and xor result is valid
            if (i % x != 0 && (xo % i == 0)) {
                total++;
            }
        }
        next <<= 1;
    }

    cout << total << endl;
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