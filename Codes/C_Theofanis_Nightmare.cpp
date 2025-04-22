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
        vi arr(n);
        for (int i = 0;i < n;i++) cin >> arr[i];
        vl suff_sum(n);
        suff_sum[n - 1] = arr[n - 1];
        for (int i = n - 2;i >= 0;i--) suff_sum[i] = suff_sum[i + 1] + arr[i];
        ll ans = suff_sum[0];
        for (int i = 1;i < n;i++) {
            if (suff_sum[i] > 0) ans += suff_sum[i];

        }
        cout << ans << endl;
    }
    return 0;
}