#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<ll>
#define ll      long long
#define vl      vector<long long>
#define fori    for (ll i = 0; i < n; i++) { cin >> arr[i]; }
bool check(ll b, ll s, ll c, ll storedB, ll storedS, ll storedC, ll priceB, ll priceS, ll priceC, ll money, ll amount) {
    ll requiredB = b * amount;
    ll requiredS = s * amount;
    ll requiredC = c * amount;
    if (requiredB > storedB) {
        //gotta buy some bread
        money -= (requiredB - storedB) * priceB;
        if (money < 0) return false;
    }
    if (requiredS > storedS) {
        money -= (requiredS - storedS) * priceS;
        if (money < 0) return false;
    }
    if (requiredC > storedC) {
        money -= (requiredC - storedC) * priceC;
        if (money < 0) return false;
    }
    return true;
}

void solve() {
    string str;cin >> str;
    ll b = 0, s = 0, c = 0;
    for (auto ch : str) {
        if (ch == 'B') b++;
        else if (ch == 'C') c++;
        else s++;
    }
    ll storedB, storedS, storedC;
    cin >> storedB >> storedS >> storedC;
    ll priceB, priceS, priceC;
    cin >> priceB >> priceS >> priceC;
    ll money;cin >> money;
    ll lo = 1, hi = 1e13;
    ll mid;
    ll ans = 0;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (check(b, s, c, storedB, storedS, storedC, priceB, priceS, priceC, money, mid)) {
            ans = mid;
            lo = mid + 1;

        }
        else {
            hi = mid - 1;
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