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
    vl precalc(1000005);
    for (ll i = 1;i <= 1000000;i++) {
        precalc[i] = (i * (i + 1)) / 2;
    }
    while (t--) {
        ll x;cin >> x;
        auto bigger = lower_bound(precalc.begin(), precalc.end(), x);
        int biggerind = bigger - precalc.begin();
        if (precalc[biggerind] == x) cout << (biggerind) << endl;
        else {
            if (precalc[biggerind] - x == 1) cout << biggerind + 1 << endl;
            else cout << biggerind << endl;
        }


    }
    return 0;
}