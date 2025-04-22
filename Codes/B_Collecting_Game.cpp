#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n;cin >> n;
    vi arr(n);
    vi arr_copy(n);
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
        arr_copy[i] = arr[i];
    }
    sort(arr_copy.begin(), arr_copy.end());
    vi req(n);
    req[0] = arr_copy[0];
    int curr_need = req[0];
    ll cum_sum = req[0] * 2;
    for (int i = 1;i < n;i++) {
        if (cum_sum >= arr_copy[i]) {
            req[i] = req[i - 1];
            cum_sum += arr_copy[i];
        }
        else {
            req[i] = (arr_copy[i] - cum_sum);
            cum_sum += arr_copy[i];
        }
    }
    for (int i = 0;i < n;i++) {
        int ans = lower_bound(req.begin(), req.end(), arr[i]) - req.begin() - 1;
        cout << ans << " ";
    }
    cout << endl;

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}