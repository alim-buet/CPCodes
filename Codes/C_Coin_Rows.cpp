#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<vector<int>> grid(2, vector<int>(n));
        vl presum_up(n, 0);
        vl presum_down(n, 0);
        for (int i = 0;i < n;i++) {
            cin >> grid[0][i];
            presum_up[i] += (i == 0) ? (grid[0][i]) : (presum_up[i - 1] + grid[0][i]);
        }
        for (int i = 0;i < n;i++) {
            cin >> grid[1][i];
            presum_down[i] += (i == 0) ? (grid[1][i]) : (presum_down[i - 1] + grid[1][i]);
        }
        if (n == 1) cout << 0 << endl;
        else if (n == 2) cout << min(grid[0][1], grid[1][0]) << endl;
        else {
            int ind = n - 1;
            ll sum_up = 0;
            ll sum_down = presum_down[n - 2];
            ll curr_choice = max(sum_down, sum_up);

            while (1) {
                ind--;
                curr_choice = max(sum_down, sum_up);
                sum_up = presum_up[n - 1] - presum_up[ind];
                sum_down = (ind == 0) ? 0 : presum_down[ind - 1];
                if (curr_choice < max(sum_down, sum_up)) {
                    break;
                }
            }
            cout << curr_choice << endl;

        }

    }
    return 0;
}