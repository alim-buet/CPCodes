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
    vector<int> presum(n);
    cin >> presum[0];
    vector<short> arr(n);
    arr[0] = presum[0];
    for (int i = 1;i < n;i++) {
        cin >> arr[i];

        presum[i] = presum[i - 1] + arr[i];
    }
    unordered_map<short, short> mp;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < i;j++) {
            if (j == 0) {
                if (presum[i] <= n) {
                    mp[presum[i]]++;

                }
            }
            else {
                if (presum[i] - presum[j - 1] <= n) {
                    mp[presum[i] - presum[j - 1]]++;
                }

            }
        }
    }
    int ans = 0;
    for (int i = 0;i < n;i++) {
        if (mp[arr[i]]) {
            ans++;
        }

    }
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