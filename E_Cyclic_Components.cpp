#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited) {
    visited[node] = true;

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited);
        }
    }
}
bool iscycle(int start, vector<vector<int>>& graph) {

    int parent = -1;
    int curr = start;
    int next;
    if (graph[start].size() != 2) return false;
    parent = start;
    curr = graph[parent][0];

    while (true) {

        if (graph[curr].size() != 2) return false;

        else {

            if (graph[curr][0] != parent) {
                parent = curr;
                curr = graph[curr][0];
            }
            else {
                parent = curr;
                curr = graph[curr][1];
            }
            if (curr == start) return true;
        }

    }
}

void solve() {
    int n, m;cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    for (int i = 0;i < m;i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<bool> visited(n + 1, false);
    int count = 0;
    for (int i = 1;i <= n;i++) {
        if (visited[i] == false) {
            dfs(i, graph, visited);
            if (iscycle(i, graph)) {
                count++;
            }


        }
    }
    cout << count << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}