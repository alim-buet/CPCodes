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
    string s;
    cin >> s;
    int ZeroPair = 0;
    int OnePair = 0;
    char prev = s[0];
    for (int i = 1;i < n;i++) {

        if (s[i] == prev) {
            if (prev == '0') {
                ZeroPair++;
            }
            else {
                OnePair++;
            }
        }
        prev = s[i];

    }
    cout << max(ZeroPair, OnePair) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}