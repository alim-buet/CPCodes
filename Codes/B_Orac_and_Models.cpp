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
        vi size(n + 1);
        for (int i = 1;i <= n;i++) cin >> size[i];
        vector<ll> dp(n + 1, 1);
        //dp[i] means the max acceptable len if we consider upto ith index
        for (int i = 1;i <= n;i++) {
            int forward_ind = 2 * i;
            while (forward_ind <= n) {
                if (size[forward_ind] > size[i]) {
                    dp[forward_ind] = max(dp[i] + 1, dp[forward_ind]);
                }
                forward_ind += i;
            }

        }
        ll ans = 0;
        for (int i = 0;i <= n;i++) {
            ans = max(ans, dp[i]);
        }
        cout << ans << endl;


    }
    return 0;
}