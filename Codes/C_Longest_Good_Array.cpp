#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll l, r;cin >> l >> r;
        ll diff = r - l;
        if (diff == 0) cout << 1 << endl;
        else {
            int ans = 1;
            while (true) {
                if ((ans * (ans + 1) / 2) <= diff) {
                    ans++;
                }
                else {
                    break;
                }
            }
            cout << ans << endl;
        }

    }
    return 0;
}