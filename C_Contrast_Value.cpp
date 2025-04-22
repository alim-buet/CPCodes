#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    int n;
    cin >> n;
    vl arr(n);
    ll totalContrast = 0;
    for (int i = 0;i < n;i++) cin >> arr[i];
    for (int i = 1;i < n;i++) {
        totalContrast += abs(arr[i] - arr[i - 1]);
    }
    if (totalContrast == 0) cout << 1 << endl;
    else {
        ll lastcont = arr[1] - arr[0];
        int i = 2;
        while (lastcont == 0) {
            lastcont = arr[i] - arr[i - 1];
            i++;

        }
        int count = 2;
        for (i;i < n;i++) {
            if (arr[i] - arr[i - 1] == 0) continue;
            else {
                if ((arr[i] - arr[i - 1]) * (lastcont) < 0) {
                    lastcont = (arr[i] - arr[i - 1]);
                    count++;

                }

            }
        }
        cout << count << endl;


    }



}




int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}