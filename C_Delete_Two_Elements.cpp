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
        vi arr(n);
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if (2 * sum % n != 0) {
            cout << 0 << endl;
            continue;
        }
        ll target = 2 * sum / n;
        map<int, int> mp;
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            int complement = target - arr[i];
            if (mp.find(complement) != mp.end()) {
                ans += mp[complement];
            }
            mp[arr[i]]++;
        }
        cout << ans << endl;
    }
    return 0;
}
