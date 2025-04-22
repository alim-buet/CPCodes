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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll first_round = (a + ((a > 0) ? (min(b, c) * 2) : 0) + ((d <= a) ? d : a));
        ll mood = ((a - d) < 0) ? 0 : a - d;
        ll d_rem = (d - a) >= 0 ? (d - a) : 0;
        ll b_rem = (a > 0) ? (b - min(b, c)) : b;
        ll c_rem = (a > 0) ? (c - min(b, c)) : c;

        if (mood == 0) cout << first_round + (((d_rem + b_rem + c_rem) > 0)) << endl;
        else {
            ll rem_bc = b_rem + c_rem;
            if ((rem_bc + d_rem) > mood) {
                cout << (first_round + mood + 1) << endl;
            }
            else {
                cout << first_round + (rem_bc + d_rem) << endl;
            }

        }

    }
    return 0;
}