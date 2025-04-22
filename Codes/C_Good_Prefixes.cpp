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
        vl arr(n);
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        ll sum;
        ll lastmax;
        ll ans = 0;
        if (arr[0] == 0) {
            ans = 1;
            sum = 0;
            lastmax = 0;
        }
        else {
            sum = arr[0];
            lastmax = arr[0];
        }
        for (int i = 1;i < n;i++) {
            ll reqsum;
            if (arr[i] > lastmax) {
                reqsum = arr[i];
                if (sum == reqsum) {
                    ans++;
                }
                sum += reqsum;
                lastmax = arr[i];
            }
            else {
                reqsum = lastmax;
                if ((sum - lastmax + arr[i]) == reqsum) {
                    ans++;
                }
                sum += arr[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}