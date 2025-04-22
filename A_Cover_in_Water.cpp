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
        int n;cin >> n;
        string s;cin >> s;
        int maxconsec = -1;
        int consec = 0;

        int totaldot = 0;
        for (int i = 0;i < n;i++) {
            totaldot += (s[i] == '.');
            if (s[i] == '.') {
                consec++;
            }
            else {
                maxconsec = max(consec, maxconsec);
                consec = 0;
            }
        }
        maxconsec = max(maxconsec, consec);
        if (maxconsec >= 3) cout << 2 << endl;
        else cout << totaldot << endl;
    }
    return 0;
}