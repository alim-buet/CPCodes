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
    int uniq = 0;
    vector<int> arr(n + 1, 0);
    for (int i = 0;i < n;i++) {
        int x;cin >> x;
        if (arr[x] == 0) {
            uniq++;
            arr[x]++;
        }
    }
    cout << uniq << endl;
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