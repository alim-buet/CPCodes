#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
bool isOkay(ll k, vl& times, ll h) {
    int n = times.size();
    ll damage = 0;
    for (int i = 0;i < n - 1;i++) {
        if ((times[i + 1] - times[i] + 1) <= k) {
            damage += (times[i + 1] - times[i]);
        }
        else {
            damage += k;
        }
    }

    damage += k;
    return (damage >= h);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, h;
        cin >> n >> h;
        vl times(n);
        for (int i = 0;i < n;i++) cin >> times[i];
        //bs on k
        ll l = 1, hi = h;
        ll mid;
        ll currans;
        while (l <= hi) {
            mid = (l + (hi - l) / 2);

            if (isOkay(mid, times, h)) {

                hi = mid - 1;
                currans = mid;
            }
            else {
                l = mid + 1;
            }
        }
        cout << currans << endl;

    }
    return 0;
}