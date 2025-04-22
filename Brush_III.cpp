#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long

void solve() {
    map<int, int> y_counts;
    int n, w, k;
    cin >> n >> w >> k;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        y_counts[y]++;
    }

    vi y_coord;
    vi counts;

    for (auto el : y_counts) {
        y_coord.push_back(el.first);
        counts.push_back(el.second);
    }

    int uniqy = y_coord.size();
    vector<ll> cum_sum(uniqy, 0);
    vector<int> ending_ind(uniqy);

    for (int i = 0; i < uniqy; i++) {
        ll sum = 0;
        int last = i;
        while (last < uniqy && y_coord[last] - y_coord[i] < w) {
            sum += counts[last];
            last++;
        }
        cum_sum[i] = sum;
        ending_ind[i] = last - 1;
    }

    vector<vector<ll>> dp(k + 1, vector<ll>(uniqy, 0));
    for (int i = 0; i < uniqy; i++) {
        dp[1][i] = cum_sum[i];
    }

    for (int move = 2; move <= k; move++) {
        for (int i = 0; i < uniqy; i++) {
            dp[move][i] = dp[move - 1][i];  // Not using this move
            for (int j = 0; j < i; j++) {
                dp[move][i] = max(dp[move][i], dp[move - 1][j] + cum_sum[i]);
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i < uniqy; i++) {
        ans = max(ans, dp[k][i]);
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}