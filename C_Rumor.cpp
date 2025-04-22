#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define inf 1e9 + 8

ll dfs(int source, ll mincost, vl& costs, vector<bool>& isVisited, vi graph[]) {
    //reference passed.. memory optimized howar kotha
    mincost = min(mincost, costs[source]);
    isVisited[source] = true;
    for (auto child : graph[source]) {
        if (isVisited[child]) continue;
        else {
            mincost = dfs(child, mincost, costs, isVisited, graph);
        }
    }
    return mincost;
}

int main() {
    int v, e;
    cin >> v >> e;
    vl costs(v + 1);
    vi graph[v + 1];
    vector<bool> isVisited(v + 1, false);

    for (int i = 1; i <= v; i++) cin >> costs[i];

    for (int i = 0; i < e; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    // Find the connected components and least cost in every one of them 
    ll ans = 0;
    for (int i = 1; i <= v; i++) {
        if (isVisited[i]) continue;
        else {
            ll minComp = dfs(i, inf, costs, isVisited, graph);
            ans += minComp;
        }
    }
    cout << ans << endl;

    return 0;
}
