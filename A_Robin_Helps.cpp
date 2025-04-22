#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    int n, k;cin >> n >> k;
    int robingold = 0;
    int ans = 0;
    for (int i = 0;i < n;i++) {
        int x;cin >> x;
        if (x >= k) {
            robingold += x;
        }
        else if (x == 0 && robingold > 0) {
            ans++;
            robingold--;
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}