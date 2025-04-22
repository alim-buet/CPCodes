#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    ll n, k;cin >> n >> k;
    vl arr(n);
    for (int i = 0;i < n;i++) cin >> arr[i];
    vl zero_cnt(32);
    for (int p = 30;p >= 0;p--) {
        int cnt = 0;
        for (int i = 0;i < n;i++) {
            if (!((arr[i]) & (1 << p))) {
                cnt++;
            }
        }
        zero_cnt[p] = cnt;
    }
    for (int p = 30;p >= 0;p--) {
        if (zero_cnt[p] <= k) {
            for (int i = 0;i < n;i++) {
                arr[i] = (arr[i]) | (1 << p);
            }
            k -= zero_cnt[p];
        }

    }
    ll ans = arr[0];
    for (int i = 1;i < n;i++) {
        ans = (ans) & (arr[i]);
    }
    cout << ans << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}