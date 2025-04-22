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
        int n;
        cin >> n;
        vi arr(n + 1), cnt(n + 1);
        int minnum = INT_MAX, maxnum = -1;
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
            cnt[arr[i]]++;
            minnum = min(minnum, arr[i]);
            maxnum = max(maxnum, arr[i]);
        }
        int ans = INT_MAX;
        for (int i = 0;i < n;i++) {
            ans = min(ans, n - cnt[arr[i]]);
        }
        cout << ans << endl;
    }
    return 0;
}