#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    ll n, d;
    cin >> n >> d;

    vector<pair<ll, ll>> moneyFriend(n);

    for (int i = 0; i < n; i++) {
        cin >> moneyFriend[i].first >> moneyFriend[i].second;
    }

    sort(moneyFriend.begin(), moneyFriend.end());

    vl friendPresum(n);
    friendPresum[0] = moneyFriend[0].second;
    for (int i = 1; i < n; i++) {
        friendPresum[i] = friendPresum[i - 1] + moneyFriend[i].second;
    }

    vector<ll> moneys(n);
    for (int i = 0; i < n; i++) {
        moneys[i] = moneyFriend[i].first;
    }

    ll ans = 0;

    for (int i = 0; i < n; i++) {
        int lastInd = upper_bound(moneys.begin(), moneys.end(), moneys[i] + d - 1) - moneys.begin() - 1;

        ll sum = friendPresum[lastInd] - (i > 0 ? friendPresum[i - 1] : 0);

        ans = max(ans, sum);
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