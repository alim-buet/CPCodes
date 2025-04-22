#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    ll n, k;cin >> n >> k;
    vl arr(n);
    for (ll i = 0;i < n;i++) cin >> arr[i];
    vi power(100, 0);
    bool isfalse = false;
    for (ll i = 0;i < n;i++) {
        ll num = arr[i];
        int po = 0;
        while (num) {
            if (num % k == 0) {
                po++;
                num /= k;
            }
            else {
                if (num % k == 1) {
                    if (power[po]) {
                        isfalse = true;
                        break;
                    }
                    else {
                        power[po] = 1;
                        num -= 1;
                        //po++;
                    }
                }
                else {
                    isfalse = true;
                    break;
                }
            }
        }

    }
    if (isfalse) no
    else yes

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