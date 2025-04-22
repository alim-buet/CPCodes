#include <bits/stdc++.h>
using namespace std;

#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int leafCount;
int m;

void dfs(vector<vector<int>>& graph, int source, int parent, int Catcount, vi& isCat, vector<bool>& isVisited) {
    isVisited[source] = true;
    if (isCat[source]) {
        Catcount++;
        if (Catcount > m) return;
    }
    else {
        Catcount = 0;
    }
    if (graph[source].size() == 1 && parent != -1) {
        //leaf node reached 
        if (Catcount <= m) {
            leafCount++;
            return;
        }

    }
    //cout << "For source = " << source << " cat count here = " << Catcount << endl;
    for (auto child : graph[source]) {
        if (!isVisited[child]) dfs(graph, child, source, Catcount, isCat, isVisited);
    }
}

void solve() {
    leafCount = 0;
    int n;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);
    vi isCat(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> isCat[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<bool> isVisited(n + 1, false);
    dfs(graph, 1, -1, 0, isCat, isVisited);
    cout << leafCount << endl;
}

int main() {
    solve();
    return 0;
}
