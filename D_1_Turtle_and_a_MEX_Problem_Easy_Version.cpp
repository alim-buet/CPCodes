#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define ll long long
#define vl vector<long long>
#define fori for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        ll second_missing = -1;

        for (int i = 0; i < n; i++) {
            int l;
            cin >> l;
            set<int> arr;
            for (int j = 0; j < l; j++) {
                int x;
                cin >> x;
                arr.insert(x);
            }

            int missing_count = 0;
            int looking_for = 0;
            for (auto el : arr) {
                while (looking_for < el) {
                    missing_count++;
                    if (missing_count == 2) {
                        second_missing = max(second_missing, (ll) looking_for);
                        break;
                    }
                    looking_for++;
                }
                if (missing_count >= 2) break;
                looking_for++;
            }

            while (missing_count < 2) {
                missing_count++;
                if (missing_count == 2) {
                    second_missing = max(second_missing, (ll) looking_for);
                }
                looking_for++;
            }
        }

        ll greater = (m > second_missing) ? (m - second_missing) : 0;
        ll ans = 0;
        if (greater > 0) {
            ans = (m * (m + 1) / 2) - (second_missing * (second_missing + 1)) / 2;
        }

        ll normal = m - greater;
        ans += (normal + 1) * second_missing;

        cout << ans << endl;
    }
    return 0;
}
