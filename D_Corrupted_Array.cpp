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
        ll n;cin >> n;
        vl arr(n + 2);
        ll csum = 0;
        for (int i = 0;i < n + 2;i++) { cin >> arr[i];csum += arr[i]; }
        sort(arr.begin(), arr.end());
        ll maxel = arr[n + 1];
        ll second_max = arr[n];
        int mole = 0;
        bool isfound = 0;
        for (mole;mole < n + 1;mole++) {
            if ((csum - arr[mole]) % 2 == 0 and (csum - arr[mole]) / 2 == maxel) {
                isfound = 1;
                break;
            }
        }
        if ((csum - maxel) % 2 == 0 and (csum - maxel) / 2 == second_max) {
            mole = n + 1;
            isfound = 1;
        }
        if (isfound) {
            if (mole == n + 1) {
                for (int i = 0;i < n;i++) cout << arr[i] << " ";
            }
            else {
                for (int i = 0;i < n + 1;i++) {
                    if (i != mole) cout << arr[i] << " ";
                }
            }
        }
        else cout << -1;
        cout << endl;

    }
    return 0;
}