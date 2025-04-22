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
    int ans = INT_MAX;
    const int mod = 32768;
    for (int i = 0;i <= 15;i++) {
        for (int j = 0;j <= 15;j++) {
            if (((n + i) * (1 << j)) % mod == 0) {
                ans = min(ans, i + j);
            }
        }
    
    }
    cout << ans << " ";

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