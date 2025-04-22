#include <bits/stdc++.h>
using namespace std;

#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

bool check(vector<ll>& cities, vector<ll>& towers, ll r) {
    int cityCount = cities.size();
    int towerCount = towers.size();
    for (int i = 0; i < cityCount; i++) {
        int l_ind = lower_bound(towers.begin(), towers.end(), cities[i]) - towers.begin();
        bool flag = false;

        if (l_ind != towerCount) {
            ll dist1 = towers[l_ind] - cities[i];
            if (dist1 <= r) flag = true;
        }

        int r_ind = l_ind - 1;
        if (r_ind >= 0) {
            ll dist2 = abs(towers[r_ind] - cities[i]);
            if (dist2 <= r) flag = true;
        }

        if (!flag) return false;
    }
    return true;
}

void solve() {
    int n, m;
    cin >> n >> m;

    set<int> city;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        city.insert(c);
    }

    set<int> tower;
    for (int i = 0; i < m; i++) {
        int tow;
        cin >> tow;
        tower.insert(tow);
    }

    vector<ll> cities(city.begin(), city.end());
    vector<ll> towers(tower.begin(), tower.end());

    int city_count = cities.size();
    ll lo = 0, hi = 2e11;
    ll ans = -1;

    while (lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        if (check(cities, towers, mid)) {
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
    solve();
    return 0;
}
