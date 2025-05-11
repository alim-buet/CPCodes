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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> costs(n);
    for (int i = 0; i < n; i++)
        cin >> costs[i];
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<vl> dp(n, vl(2));
    // dp[i][0] - min cost up until ith by not reversing the ith one, dp[i][1] - min cost up until ith by reversing ith one
    dp[0][0] = 0;
    dp[0][1] = costs[0];
    const ll inf = 1e15;
    int flag = 1;

    for (int i = 1; i < n; i++)
    {
        // we swap?
        string revstring = s[i];
        reverse(revstring.begin(), revstring.end());
        dp[i][1] = inf;

        if (revstring >= s[i - 1])
        {
            dp[i][1] = min(dp[i][1], dp[i - 1][0]);
        }
        string prevs = s[i - 1];
        reverse(prevs.begin(), prevs.end());
        if (revstring >= prevs)
        {
            dp[i][1] = min(dp[i][1], dp[i - 1][1]);
        }
        if (dp[i][1] != inf)
            dp[i][1] += costs[i];
        // do not swap
        dp[i][0] = inf;
        if (s[i] >= s[i - 1])
        {
            dp[i][0] = min(dp[i][0], dp[i - 1][0]);
        }
        if (s[i] >= prevs)
        {
            dp[i][0] = min(dp[i][0], dp[i - 1][1]);
        }
        if (dp[i][0] >= inf && dp[i][1] >= inf)
        {
            // none of them works
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << min(dp[n - 1][0], dp[n - 1][1]) << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}