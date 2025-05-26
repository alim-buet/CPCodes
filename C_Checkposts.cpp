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

void dfs1(int node, vector<vi> &adj, vector<bool> &visited, stack<int> &st)
{
    visited[node] = true;
    for (int neighbor : adj[node])
    {
        if (!visited[neighbor])
        {
            dfs1(neighbor, adj, visited, st);
        }
    }
    st.push(node);
}

void dfs2(int node, vector<vi> &revAdj, vector<bool> &visited, vi &scc)
{
    visited[node] = true;
    scc.push_back(node);
    for (int neighbor : revAdj[node])
    {
        if (!visited[neighbor])
        {
            dfs2(neighbor, revAdj, visited, scc);
        }
    }
}

vector<vi> findSCCs(vector<vi> &adj)
{
    int n = adj.size();
    vector<bool> visited(n, false);
    stack<int> st;

    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
        {
            dfs1(i, adj, visited, st);
        }
    }

    vector<vi> revAdj(n);
    for (int u = 0; u < n; ++u)
    {
        for (int v : adj[u])
        {
            revAdj[v].push_back(u);
        }
    }

    fill(visited.begin(), visited.end(), false);
    vector<vi> sccs;

    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        if (!visited[node])
        {
            vector<int> scc;
            dfs2(node, revAdj, visited, scc);
            sccs.push_back(scc);
        }
    }

    return sccs;
}

void solve()
{
    int n;
    cin >> n;
    vector<vi> graph(n);
    vl costs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> costs[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;
        graph[u].push_back(v);
    }
    vector<vi> sccs = findSCCs(graph);
    ll totalCost = 0;
    ll totalWay = 1;
    const int mod = 1000000007;
    for (auto comp : sccs)
    {
        ll minCost = 1e9;
        for (auto v : comp)
        {
            minCost = min(minCost, costs[v]);
        }
        ll minCostCount = 0;
        for (auto v : comp)
        {
            minCostCount += (minCost == costs[v]);
        }
        totalCost += minCost;
        totalWay = ((totalWay % mod) * (minCostCount % mod)) % mod;
    }
    cout << totalCost << " " << totalWay << endl;
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