#include <bits/stdc++.h>
using namespace std;

#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define vi      vector<int>
#define vl      vector<long long>
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    bool found = false;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            cout << s[i] << s[i + 1] << endl;
            found = true;
            break;
        }
        if (i < n - 2 && s[i] != s[i + 1] && s[i + 1] != s[i + 2] && s[i] != s[i + 2]) {
            cout << s[i] << s[i + 1] << s[i + 2] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << -1 << endl;
    }
}

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
