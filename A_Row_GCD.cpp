#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll gp = (n > 1) ? a[1] - a[0] : 0 ;
    for (int i = 2; i < n;i++){
        gp = __gcd(gp, a[i] - a[0]);
    }
    
    for (int i=0; i < m;i++){
        ll x;
        cin >> x;
        cout << __gcd(a[0] + x, gp) << " ";
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