#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n, k;
    cin >> n >> k;
    vl arr(n);
    for (int i = 0;i < n;i++) cin >> arr[i];
    ll ans = 0;
    int start = 0;
    int end, streak;
    for (int i = 1;i < n;i++) {
        if (arr[i] * 2 <= arr[i - 1]) {
            end = i - 1;
            streak = end - start + 1;
            ans += (streak - k >= 1) ? (streak - k) : 0;
            start = i;
        }
    }
    end = n - 1;
    streak = end - start + 1;
    ans += (streak - k >= 1) ? (streak - k) : 0;
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}