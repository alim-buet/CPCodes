#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    int n, m, q;cin >> n >> m >> q;
    vi mpos(m);
    int maxpos = -1;
    int minpos = n + 1;
    for (int i = 0;i < m;i++) cin >> mpos[i];
    sort(mpos.begin(), mpos.end());
    maxpos = mpos[m - 1];
    minpos = mpos[0];
    int spos;
    while (q--)
    {
        cin >> spos;
        if (m == 1) {
            if (mpos[0] > spos) cout << mpos[0] - 1 << endl;
            else cout << n - mpos[0] << endl;
        }
        else {
            if (spos > maxpos) {
                cout << (n - maxpos) << endl;
            }
            else if (spos < minpos) cout << (minpos - 1) << endl;
            else {
                int hi = upper_bound(mpos.begin(), mpos.end(), spos) - mpos.begin();
                cout << (mpos[hi] - mpos[hi - 1]) / 2 << endl;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}