//using the method from the editorial


#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll N = 1'000'000'000'000L;

unordered_set<ll> cubes;

void precalculatethecubes() {
    for (ll i = 1; i * i * i <= N; i++) {
        cubes.insert(i * i * i);
    }
}

void solve() {
    ll x;
    cin >> x;
    for (ll i = 1; i * i * i <= x; i++) {
        if (cubes.count(x - i * i * i)) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    precalculatethecubes();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
}