#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
ll lineWritten(ll v, ll k) {
    ll ans = 0;
    ll divisor = 1;
    while (v / (divisor)) {
        ans += (v / divisor);
        divisor *= k;
    }
    return ans;
}
void solve() {
    ll n, k;
    cin >> n >> k;
    ll l = 1, r = n;
    ll mid;
    ll ans;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (lineWritten(mid, k) >= n) {
            ans = mid;
            r = mid - 1;


        }
        else {
            l = mid + 1;

        }

    }
    cout << ans << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}