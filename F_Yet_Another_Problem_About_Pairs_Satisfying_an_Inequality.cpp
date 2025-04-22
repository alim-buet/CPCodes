#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> validPairs;
    int maxa = -1;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;

        if (i > a) {
            validPairs.push_back({ a, i });
            maxa = max(maxa, a);
        }
    }

    sort(validPairs.begin(), validPairs.end());

    if (validPairs.size() == 0) {
        cout << 0 << endl;
        return;
    }

    vi greaterCnt(validPairs.back().first + 1, 0);
    int pairCnt = validPairs.size();
    for (int i = pairCnt - 1; i >= 0; i--) {
        greaterCnt[validPairs[i].first]++;
    }
    for (int i = validPairs.back().first - 1; i >= 0; i--) {
        greaterCnt[i] += greaterCnt[i + 1];
    }

    ll ans = 0;
    for (auto p : validPairs) {
        if (p.second + 1 > maxa) {
            continue;
        }
        else {
            ans += greaterCnt[p.second + 1];
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
