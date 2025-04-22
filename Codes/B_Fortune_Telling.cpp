#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    ll n, x, y;cin >> n >> x >> y;
    ll el;
    ll sum = 0;
    for (int i = 0;i < n;i++) {
        cin >> el;
        sum += el;
    }
    if ((sum + x + y) % 2 == 0) cout << "Alice" << endl;
    else cout << "Bob" << endl;
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