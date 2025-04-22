#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

bool can_defeat(vector<int>& attack, vector<int>& cooldown, ll h, ll turns) {
    ll total_damage = 0;
    for (int i = 0; i < attack.size(); i++) {
        total_damage += (ceil(turns / (double) cooldown[i])) * attack[i];
        if (total_damage >= h) return true;
    }
    return false;
}

void solve() {
    int h, n;
    cin >> h >> n;
    vector<int> attack(n), cooldown(n);

    for (int i = 0; i < n; i++) cin >> attack[i];
    for (int i = 0; i < n; i++) cin >> cooldown[i];

    ll lo = 1, hi = 1e12, ans = hi;

    while (lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        if (can_defeat(attack, cooldown, h, mid)) {
            ans = mid;
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }
    cout << ans << endl;
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