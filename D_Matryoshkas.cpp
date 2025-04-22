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
    map<int, int> mp;
    for (int i = 0;i < n;i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    int ans = 0;
    int lastopening = 0;
    int lastnum = -1;
    for (auto el : mp) {
        if (el.first == lastnum + 1) {
            if (el.second >= lastopening) {
                ans += (el.second - lastopening);

            }

            lastopening = el.second;
        }
        else {
            lastopening = el.second;
            ans += el.second;
        }
        lastnum = el.first;

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