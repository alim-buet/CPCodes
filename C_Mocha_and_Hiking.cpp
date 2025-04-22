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
    vi dir(n);
    for (int i = 0;i < n;i++) cin >> dir[i];
    int firstIn = n - 1;
    bool isFound = false;
    for (firstIn;firstIn >= 0;firstIn--) {
        if (dir[firstIn] == 0) {
            isFound = true;
            break;
        }
    }
    if (isFound) {
        for (int i = 0;i < n;i++) {
            if (i == firstIn) {
                cout << (i + 1) << " " << n + 1 << " ";
            }
            else cout << i + 1 << " ";
        }
    }
    else {
        cout << n + 1 << " ";
        for (int i = 1;i <= n;i++) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}