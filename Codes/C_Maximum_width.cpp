#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n, m;cin >> n >> m;
    string s, t;cin >> s >> t;
    vi store(m);
    if (m == n) cout << 1 << endl;
    else {
        int ti = 0;
        for (int si = 0;si < n;si++) {
            if (s[si] == t[ti]) {
                store[ti++] = si;
            }
        }
        ti = m - 1;
        int maxans = -1;
        for (int si = n - 1;si >= 0;si--) {
            if (ti <= 0) break;
            if (s[si] == t[ti]) {
                maxans = max(maxans, si - store[ti - 1]);
                ti--;
            }
        }
        cout << maxans << endl;
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}