#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll process(ll x, ll y, ll k) {
    x++; // initial increment
    k--; // decrease the number of operations by one

    if (k == 0) return x;

    while (k > 0 && x >= y) {
        // ll div = (long long) (ceil(x / (double) y));
        // ll steps = (div * (y)) - x;
        ll rem = x % y;
        ll steps = (rem == 0) ? 0 : (y - rem);

        if (k < steps) {
            return x + k;
        }

        k -= steps;
        x += steps;

        while (x % y == 0) {
            x /= y;
        }
        cout << "k = " << k << " steps = " << steps << " x = " << x << endl;
    }
    cout << "k=" << k << " x=" << x << endl;

    if (k == 0) {
        return x;
    }
    else {
        if ((y - x) <= k) {
            x = 1;
            k -= (y - x);
            ll turn = (k) / (y - 1);
            k -= (turn) * (y - 1);
            return 1 + k;
        }
        else {
            return x + k;
        }
    }


}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;
        ll ans = process(x, y, k);
        while (ans % y == 0) {
            ans /= y;
        }
        cout << ans << endl;
    }
    return 0;
}