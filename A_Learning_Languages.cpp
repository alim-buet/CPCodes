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

void solve()
{
    int n, m;
    cin >> n >> m;
    unordered_set<int> langUsed;
    vector<set<int>> graph(m + 1);
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt;
        cin >> cnt;
        zeroCount += (cnt == 0);
        int last;
        if (cnt > 0)
        {
            cin >> last;
            langUsed.insert(last);
        }
        for (int j = 1; j < cnt; j++)
        {
            int curr;
            cin >> curr;
            graph[last].insert(curr);
            graph[curr].insert(last);
            last = curr;
        }
    }
    // count the scc;
    int scc = 0;
    vector<int> visited(m + 1, 0);
    for (int lang : langUsed)
    {
        if (visited[lang] == 0)
        {
            scc++;

            // run a bfs
            queue<int>
                q;
            q.push(lang);
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                visited[node] = 1;
                for (int adj : graph[node])
                {
                    if (visited[adj] == 0)
                    {
                        q.push(adj);
                    }
                }
            }
        }
    }
    cout << max((scc - 1), 0) + zeroCount << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}