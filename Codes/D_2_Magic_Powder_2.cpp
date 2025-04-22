#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

ll magicNeeded(ll desiredCookies, vl& ingredientNeeded, vl& ingredientStock) {
    ll need = 0;
    for (int i = 0; i < ingredientNeeded.size(); i++) {
        ll requiredAmount = desiredCookies * ingredientNeeded[i];
        if (requiredAmount > ingredientStock[i]) {
            need += requiredAmount - ingredientStock[i];
        }
        if (need > 1e9) return need;
    }
    return need;
}

void solve() {
    ll n, magicStock;
    cin >> n >> magicStock;
    vl ingredientNeeded(n), ingredientStock(n);
    for (int i = 0; i < n; i++) {
        cin >> ingredientNeeded[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> ingredientStock[i];
    }

    ll l = 0, r = 1e10 + 7, mid;
    ll ans = 0;

    while (l <= r) {
        mid = l + (r - l) / 2;
        if (magicNeeded(mid, ingredientNeeded, ingredientStock) <= magicStock) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
