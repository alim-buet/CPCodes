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
        string s;
        cin >> s;
        int sheepcnt = 0;
        for (int i = 0;i < n;i++) if (s[i] == '*') sheepcnt++;
        vi sheep_ind(sheepcnt);
        int ind = 0;
        for (int i = 0;i < n;i++) {
            if (s[i] == '*') {
                sheep_ind[ind++] = i;
            }
        }
        if (sheepcnt == n or sheepcnt == 1 or sheepcnt == 0) cout << 0 << endl;
        else {
            int middle_ship_ind = sheepcnt / 2;
            //middle e je sheep ase tar dike shobai approach korle min move lagbe
            ll ans = 0;
            int left_pos = sheep_ind[middle_ship_ind] - 1;
            for (int i = 0;i < middle_ship_ind;i++) {
                ans += (left_pos - sheep_ind[i]);
                left_pos--;
            }
            int right_pos = sheep_ind[middle_ship_ind] + 1;
            for (int i = middle_ship_ind + 1;i < sheepcnt;i++) {
                ans += (sheep_ind[i] - right_pos);
                right_pos++;
            }
            cout << ans << endl;
        }


    }
    return 0;
}