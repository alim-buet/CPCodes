#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    ll n;
    cin >> n;
    ll ans = 0;

    while (n) {
        ll p = 1LL << (63 - __builtin_clzll(n)); //buit-in.. faster.. i hope
        ans += (p << 1) - 1;
        n -= p;
        //cout << "p = " << p << " n = " << n << endl;
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
