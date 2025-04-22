#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;cin >> n;
    ll mod = 1000000007;
    ll x = 1, d = 0;
    if (n == 1) cout << 0 << endl;
    else {
        for (int i = 2;i <= n - 1;i++) {
            ll prevx = x;
            x = ((2 * prevx) % mod + d % mod) % mod;
            d = (3 * prevx) % mod;
        }
        cout << (3 * x)%mod << endl;
    }

    return 0;
}