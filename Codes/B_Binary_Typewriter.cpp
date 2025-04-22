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
    string s;cin >> s;
    int transitions = s[0] == '1';
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i - 1]) transitions++;
    }
    //first 0
    int f1 = -1, f2 = -1;
    int lz = -1;

    for (int i = 0;i < n;i++) {
        if (s[i] == '1') {
            if (f1 != -1) {
                f2 = i;
            }
            else {
                f1 = i;
                f2 = i;
            }
        }
        else {
            lz = i;
        }
    }
    if (f1 == -1 && f2 == -1) cout << n << endl;
    else {
        if (lz == -1) cout << n + 1 << endl;

        else if (lz > f2 || lz < f1) {
            cout << n + transitions - 1 << endl;
        }
        else {
            cout << n + transitions - 2 << endl;
        }
    }

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