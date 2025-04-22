#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n, k;
    cin >> n >> k;
    vi arr(255, 0);
    string s;cin >> s;
    for (auto ch : s) {
        arr[ch]++;
    }
    int paired = 0;
    int oddcount = 0;
    for (int i = 0;i < 255;i++) {
        if (arr[i] % 2) oddcount++;
        paired += (arr[i] / 2) * 2;
    }
    int len = paired / k;
    oddcount += (paired % k);
    if (oddcount >= k) {
        if (len % 2 == 0) {
            cout << len + 1 << endl;
        }
        else cout << len << endl;
    }
    else {
        if (len > 0) cout << len << endl;
        else cout << 1 << endl;
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