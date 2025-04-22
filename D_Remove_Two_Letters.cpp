#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int possiblemove = n - 1;
        string s;
        cin >> s;
        int unchanged = 0;
        for (int i = 0;i < n - 2;i++) {
            unchanged += (s[i] == s[i + 2]);

        }
        cout << possiblemove - unchanged << endl;
    }
    return 0;
}