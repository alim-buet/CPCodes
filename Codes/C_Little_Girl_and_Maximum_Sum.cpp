#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    ll n, q;cin >> n >> q;
    vl arr(n + 1);
    vl freq(n + 1, 0);
    for (int i = 0;i < n;i++) {
        cin >> arr[i];

    }
    while (q--) {
        int l, r;cin >> l >> r;
        freq[l - 1]++;
        if (r < n) freq[r]--;
    }
    for (int i = 1;i < n;i++) {
        freq[i] += freq[i - 1];
    }
    sort(freq.begin(), freq.end(), greater<int>());
    sort(arr.begin(), arr.end(), greater<int>());
    ll ans = 0;
    for (int i = 0;i < n;i++) {
        ans += (arr[i] * freq[i]);
    }
    cout << ans << endl;


}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    solve();
    return 0;
}