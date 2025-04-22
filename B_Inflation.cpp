#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
int isOkay(vi& arr, vl& presum, ll mid) {

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<double> arr(n);
        vector<double> presum(n);
        cin >> arr[0];
        presum[0] = arr[0];
        for (int i = 1;i < n;i++) {
            cin >> arr[i];
            presum[i] = presum[i - 1] + arr[i];
        }
        ll ans = 0;
        for (int i = 1;i < n;i++) {
            int temp = (int) ceil(k * (presum[i - 1]) / 100.0 - arr[i]);
            cout << "i = " << i << " temp = " << temp << endl;
            if (temp > 0) ans += temp;
        }
        cout << ans << endl;
    }


    return 0;
}