#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void dijkstra(vector<vi>& graph, vi& minDistances, int source) {
    minDistances[source] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minPq;
    minPq.push({ 0,source });
    while (!minPq.empty())
    {
        pair<int, int> m = minPq.top();
        minPq.pop();
        int u = m.second;
        for (int c = 0;c < graph.size();c++) {
            if (graph[u][c] != INT_MAX) {
                if (graph[u][c] + minDistances[u] < minDistances[c]) {
                    minDistances[c] = graph[u][c] + minDistances[u];
                    minPq.push({ minDistances[c], c });
                }
            }
        }

    }

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;cin >> n >> m;
    vector<vi> graph(n, vector<int>(n, INT_MAX));
    for (int i = 0;i < m;i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u][v] = w;
    }
    int source;cin >> source;
    vi minDistance(n, INT_MAX);
    dijkstra(graph, minDistance, source);
    for (int i = 0;i < n;i++) {
        cout << i << " : " << minDistance[i] << " ";
    }


    return 0;
}