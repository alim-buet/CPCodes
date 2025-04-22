#include <bits/stdc++.h>
using namespace std;

#define yes     cout << "YES" << endl
#define no      cout << "NO" << endl
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>

void solve() {
    int n, s;
    cin >> n >> s;
    vi arr(n + 1), prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    if (prefix_sum[n] < s) {
        cout << -1 << endl;
        return;
    }

    int min_step = INT_MAX;
    for (int i = 0; i < n; i++) {
        int step = upper_bound(prefix_sum.begin() + i + 1, prefix_sum.end(), prefix_sum[i] + s) - prefix_sum.begin() - i - 1;
        min_step = min(min_step, n - step);
    }

    cout << min_step << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
