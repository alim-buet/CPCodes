#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <bitset>
#include <numeric>
#include <limits>
#include <cstring>
#include <cassert>
#include <list>
#include <tuple>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long

void solve()
{
    ll n, h, l, r;
    cin >> n >> h >> l >> r;
    vl a(n + 1); // 1-based for clarity
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<vector<ll>> dp(n + 1, vector<ll>(h, -1));
    dp[0][0] = 0;

    for (int i = 1; i <= n; ++i)
    {
        for (int t = 0; t < h; ++t)
        {
            // from two previous times
            int t1 = (t - a[i] + h) % h;
            int t2 = (t - a[i] + 1 + h) % h;

            if (dp[i - 1][t1] != -1)
                dp[i][t] = max(dp[i][t], dp[i - 1][t1] + ((t >= l && t <= r) ? 1 : 0));
            if (dp[i - 1][t2] != -1)
                dp[i][t] = max(dp[i][t], dp[i - 1][t2] + ((t >= l && t <= r) ? 1 : 0));
        }
    }

    ll ans = *max_element(dp[n].begin(), dp[n].end());
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}