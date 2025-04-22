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
    int rem = n - 2 * k;
    sort(arr.begin(), arr.end(), greater<int>());
    int sum = 0;
    for (int i = 0;i < 2 * k;i++) {
        int cnt = count(arr.begin(), arr.begin() + 2 * k, arr[i]);
        if (cnt > k) {
            //cout << "we hace found " << arr[i] << " who has a count of " << cnt << endl;
            sum += cnt - k;
            break;
        }
    }
    for (int i = 2 * k;i < n;i++) {
        sum += arr[i];
    }
    cout << sum << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}