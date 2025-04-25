#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define ll long long
#define vl vector<long long>
#define fori                    \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> arr[i];          \
    }
void bfs(int src, vector<vector<int>> &graph, vector<int> &visited, vector<int> &ans)
{
    visited[src] = 1;
    queue<int> q;
    q.push(src);
    int cnt = 0;
    vector<int> temp;
    while (!q.empty())
    {
        cnt++;
        int node = q.front();
        q.pop();
        temp.push_back(node);
        for (auto child : graph[node])
        {
            if (!visited[child])
            {
                visited[child] = 1;
                q.push(child);
            }
        }
    }
    for (auto el : temp)
    {
        ans[el] = cnt;
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        vector<int> group(k);
        for (int j = 0; j < k; j++)
        {
            cin >> group[j];

            if (j)
            {
                graph[group[j - 1]].push_back(group[j]);
                graph[group[j]].push_back(group[j - 1]);
            }
        }
    }
    vector<int> visited(n + 1, 0);
    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            bfs(i, graph, visited, ans);
        }
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}