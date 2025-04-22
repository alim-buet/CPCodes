#include <bits/stdc++.h>
using namespace std;

bool check(vector<pair<int, int>>& vp, int k) {
    int n = vp.size();
    int left_range = 0, right_range = 0; 

    for (int i = 0; i < n; i++) {
        left_range -= k;
        right_range += k;

        
        left_range = max(left_range, vp[i].first);
        right_range = min(right_range, vp[i].second);

      
        if (left_range > right_range) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> vp(n);

    for (int i = 0; i < n; i++) {
        cin >> vp[i].first >> vp[i].second;
    }

    int lo = 0, hi = 1e9, ans = hi;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (check(vp, mid)) {
            ans = mid;
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }

    cout << ans << "\n";
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
