#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    int n, k;cin >> n >> k;
    vi arr(n);
    for (int i = 0;i < n;i++) cin >> arr[i];
    int oneCount = 0;
    vi w_count(k);
    for (int i = 0;i < k;i++) {
        int w;cin >> w;
        oneCount += (w == 1);
        w_count[i] = w;

    }
    ll ans = 0;
    sort(arr.begin(), arr.end(), greater<int>());
    sort(w_count.begin(), w_count.end());
    int lastInd = k - 1;
    for (int i = 0;i < k;i++) {
        if (w_count[i] == 1) ans += 2 * arr[i];
        else {
            ans += (arr[i]) + (arr[lastInd + w_count[i] - 1]);
            lastInd += w_count[i] - 1;

        }
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