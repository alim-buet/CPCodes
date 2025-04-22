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
        string s;
        cin >> s;
        int zerocnt = 0;
        for (int i = 0;i < n;i++) zerocnt += (s[i] == '0');
        if (zerocnt % 2) {
            if (zerocnt == 1) cout << "BOB" << endl;
            else cout << "ALICE" << endl;
        }
        else {
            cout << "BOB" << endl;
        }

    }
    return 0;
}