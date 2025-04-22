#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    string s;cin >> s;
    int n = s.size();

    string w(n, '1');
    int x;cin >> x;
    for (int i = 0;i < n;i++) {
        if (s[i] == '0') {
            if ((i - x) >= 0) w[i - x] = '0';
            if ((i + x) < n) w[i + x] = '0';
        }
    }
   // cout << "w = " << w << endl;
    int flag = 1;
    for (int i = 0;i < n;i++) {
        if (s[i] == '1') {
            if (((i - x) < 0 && (i + x) >= n)) { flag = 0; break; }
            else if ((i - x) >= 0 && w[i - x] == '1') continue;
            else if ((i + x) < n && w[i + x] == '1') continue;
            else {
                flag = 0;
                break;
            }
        }
    }
    if (flag) cout << w << endl;
    else cout << -1 << endl;


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