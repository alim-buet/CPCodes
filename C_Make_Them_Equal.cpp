#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    int n;char ch;cin >> n >> ch;
    string s;cin >> s;
    int isFound = -1;
    int isAllsame = 1;
    for (int i = 0;i < n;i++) {
        if (s[i] != ch) {
            isAllsame = 0;
            break;
        }
    }
    if (isAllsame) cout << 0 << endl;
    else {

        for (int i = n - 1;i >= n / 2;i--) {
            if (s[i] == ch) {
                isFound = i + 1;
                break;
            }
        }
        if (isFound != -1) {
            cout << 1 << endl << isFound << endl;
        }
        else {
            cout << 2 << endl;
            cout << n << " " << n - 1 << endl;
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