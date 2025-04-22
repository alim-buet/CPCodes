#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> prefix_a(n + 1, 0), prefix_b(n + 1, 0), prefix_c(n + 1, 0);

    for (int i = 0; i < n; i++) {
        prefix_a[i + 1] = prefix_a[i] + (s[i] == 'a');
        prefix_b[i + 1] = prefix_b[i] + (s[i] == 'b');
        prefix_c[i + 1] = prefix_c[i] + (s[i] == 'c');
    }

    int ans = INT_MAX;

    for (int length = 2; length <= min(7, n); length++) { 
        for (int start = 0; start + length - 1 < n; start++) {
            int end = start + length - 1;
            int count_a = prefix_a[end + 1] - prefix_a[start];
            int count_b = prefix_b[end + 1] - prefix_b[start];
            int count_c = prefix_c[end + 1] - prefix_c[start];

            if (count_a > count_b && count_a > count_c) {
                ans = min(ans, length);
            }
        }
    }

    if (ans == INT_MAX) {
        cout << -1 << endl;
    }
    else {
        cout << ans << endl;
    }
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
