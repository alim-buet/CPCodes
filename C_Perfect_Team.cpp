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
        int c, m, x;cin >> c >> m >> x;
        int maxPossibleAns = min(c, m);
        int standby = x + c - min(c, m) + m - min(c, m);
        if (standby >= maxPossibleAns) cout << maxPossibleAns << endl;
        else {
            if ((maxPossibleAns - standby) % 3 == 0) {
                cout << maxPossibleAns - ((maxPossibleAns - standby) / 3) << endl;

            }
            else {
                cout << (maxPossibleAns) -((maxPossibleAns - standby) / 3) - 1 << endl;
            }
        }
    }
    return 0;
}