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
// #define ll long long
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vi battery(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> battery[i];
    }
    vector<vector<pii>> graph(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        graph[u].push_back({v, wt});
    }

    priority_queue<pair<int, pll>, vector<pair<int, pll>>, greater<pair<int, pll>>> minpq;
    minpq.push({0, {battery[1], 1}});
    

    while (!minpq.empty())
    {
        auto curr = minpq.top();
        minpq.pop();
        int minYet = curr.first;
        int maxStore = curr.second.first;
        int node = curr.second.second;

        if (node == n)
        {
            cout << minYet << endl;
            return;
        }

        for (auto child : graph[node])
        {
            int childNode = child.first;
            int wt = child.second;
            if (maxStore >= wt)
            {
                int newMinYet = max(minYet, wt);
                minpq.push({newMinYet, {maxStore + battery[childNode], childNode}});
            }
        }
    }

    cout << -1 << endl;
}

signed main()
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