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
    vi arr(n);
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    ll ans = arr[n - 2];
    for (int i = n - 3;i >= 0;i--) {
        ans -= arr[i];
    }
    cout << arr[n - 1] - ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}