#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
double totalLen = 0.0;
// int cnt = 0;
void dfs(int node, vector<vector<int>>& graph, double prob, vector<int>& isVisited) {
    // cout << "Node = " << node << endl;
    // cout << "NOde size = " << graph[node].size() << endl;
    //probability factor consider kora lagbe
    for (int child : graph[node]) {
        if (!isVisited[child]) {
            isVisited[child] = isVisited[node] + 1;
            if (node == 1) dfs(child, graph, prob / (graph[node].size()), isVisited);
            else dfs(child, graph, prob / (graph[node].size() - 1), isVisited);

        }
    }
    if (graph[node].size() == 1) { totalLen += (isVisited[node] - 1) * prob; }



}
void solve() {
    int n;cin >> n;
    vector<vector<int>> graph(n + 1);
    for (int i = 0;i < n - 1;i++) {
        int u, v;cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<int> isVisited(n + 1, 0);
    isVisited[1] = 1;
    dfs(1, graph, 1.0, isVisited);
    // cout << totalLen << " " << cnt << endl;

    cout << fixed << setprecision(15) << totalLen << endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}