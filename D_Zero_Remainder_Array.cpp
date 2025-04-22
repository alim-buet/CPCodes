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
        int n, k;
        cin >> n >> k;
        vl arr(n);
        vl rem_arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            rem_arr[i] = arr[i] % k;
        }

        sort(rem_arr.begin(), rem_arr.end());

        ll ans = 0;
        ll streak = 0; 

        for (int i = 0; i < n; i++) {
            if (rem_arr[i] == 0) continue; 

            if (i > 0 && rem_arr[i] == rem_arr[i - 1]) {
                streak++;
            }
            else {
                streak = 0;
            }

            ll x = k - rem_arr[i] + streak * k;
            ans = max(ans, x + 1);
        }

        cout << ans << endl;
    }
    return 0;
}
