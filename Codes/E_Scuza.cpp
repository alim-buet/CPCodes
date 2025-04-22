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
        int n, q;
        cin >> n >> q;
        vl max_steps(n);
        cin >> max_steps[0];
        vl presum(n);
        presum[0] = max_steps[0];
        for (int i = 1;i < n;i++) {
            ll x;
            cin >> x;
            max_steps[i] = max(x, max_steps[i - 1]);
            presum[i] = presum[i - 1] + x;
        }
      

        while (q--) {
            int k;
            cin >> k;
            auto lo = upper_bound(max_steps.begin(), max_steps.end(), k);
            auto in = max_steps.begin();

            if (k >= max_steps[n - 1]) cout << presum[n - 1] << " ";
            else if (k < max_steps[0]) cout << 0 << " ";
            else if (lo == max_steps.end()) cout << presum[n - 1] << " ";
            else {
                cout << presum[lo - in - 1] << " ";
            }

        }
        cout << endl;

    }
    return 0;
}