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
        int n, x, op;cin >> n >> x >> op;
        int curr_l_boundary = x;
        int curr_r_boundary = x;
        for (int i = 0;i < op;i++) {
            int l, r;cin >> l >> r;
            if (l >= curr_l_boundary and r <= curr_r_boundary) continue;
            else if (l <= curr_l_boundary and (r >= curr_l_boundary)) {
                curr_l_boundary = min(curr_l_boundary, l);
                curr_r_boundary = max(curr_r_boundary, r);
            }
            else if (l <= curr_r_boundary and r >= curr_r_boundary) {
                curr_l_boundary = min(curr_l_boundary, l);
                curr_r_boundary = max(curr_r_boundary, r);
            }
        }
        //  cout << "l = " << curr_l_boundary << " r = " << curr_r_boundary << endl;


        cout << (curr_r_boundary - curr_l_boundary) + 1 << endl;


    }
    return 0;
}