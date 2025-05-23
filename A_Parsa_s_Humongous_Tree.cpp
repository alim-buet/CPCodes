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

void dfs(int u,  vector<vi> &tree,  ll values[][2], vi &visited, vector<vl> &dp)
{
    visited[u] = 1;
    for (int v : tree[u])
    {
        if (!visited[v])
        {
            dfs(v, tree, values, visited, dp);
            //either l/r two options
            dp[u][0] += max(abs(values[v][0] - values[u][0]) + dp[v][0],
                            abs(values[v][1] - values[u][0]) + dp[v][1]);
            dp[u][1] += max(abs(values[v][0] - values[u][1]) + dp[v][0],
                            abs(values[v][1] - values[u][1]) + dp[v][1]);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<vi> tree(n);
    ll values[n][2];
    for (int i = 0; i < n; ++i)
        cin >> values[i][0] >> values[i][1];

    for (int i = 0; i < n - 1; ++i)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    vi visited(n, 0);
    vector<vl> dp(n, vl(2, 0));

    dfs(0, tree, values, visited, dp);
    cout << max(dp[0][0], dp[0][1]) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}