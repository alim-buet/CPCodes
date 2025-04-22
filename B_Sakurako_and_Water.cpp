#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n;cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            cin >> grid[i][j];
        }
    }
    vector<vector<int>> visited(n, vector<int>(n, 0));
    int ans = 0;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {

            if (grid[i][j] < 0 && visited[i][j] == 0) {
                int mins = 2;
                for (int k = 0;i + k < n && j + k < n;k++) {
                    visited[i + k][j + k] = 1;
                    if (grid[i + k][j + k] < 0) mins = min(mins, grid[i + k][j + k]);
                }
                ans += (-1 * mins);

            }
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