#include <bits/stdc++.h>
using namespace std;

#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>

void solve() {
    ll n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }

    vl arr;
    for (auto el : mp) {
        arr.push_back(el.second);
    }

    sort(arr.begin(), arr.end());
    ll max_rem = -1;
    ll cnt = arr.size();

    for (ll i = cnt - 1; i >= 0; i--) {
        ll curr = (cnt - i) * arr[i];
        max_rem = max(max_rem, curr);
    }

    ll sum = accumulate(arr.begin(), arr.end(), 0LL);
    cout << sum - max_rem << endl;
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
