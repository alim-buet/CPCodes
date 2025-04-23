#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long

int dfs(int u, int parent, const vector<vi> &tree, vi &level, vi &subtreeSize)
{
    subtreeSize[u] = 1;
    for (int v : tree[u])
    {
        if (v != parent)
        {
            level[v] = level[u] + 1;
            subtreeSize[u] += dfs(v, u, tree, level, subtreeSize);
        }
    }
    return subtreeSize[u];
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<vi> tree(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    vi level(n + 1, 0);
    vi subtreeSize(n + 1, 0);

    dfs(1, 0, tree, level, subtreeSize);

    vector<int> gain(n + 1);
    for (int i = 1; i <= n; i++)
    {
        gain[i] = level[i] - (subtreeSize[i] - 1); 
    }

    sort(gain.begin() + 1, gain.end(), greater<int>());

    ll totalHappiness = 0;
    for (int i = 1; i <= k; i++)
    {
        totalHappiness += gain[i];
    }

    cout << totalHappiness << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
