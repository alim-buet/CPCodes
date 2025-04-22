#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void dijkstra(vector<vector<int>>& graph, vector<vector<int>>& weight, vi& minDistances, int source) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minPQ;
    minDistances[source] = 0;
    minPQ.push({ 0, source });

    while (!minPQ.empty()) {
        pair<int, int> m = minPQ.top();
        minPQ.pop();
        int u = m.second;

        for (int adj : graph[u]) {
            if (weight[u][adj] + minDistances[u] < minDistances[adj]) {
                minDistances[adj] = weight[u][adj] + minDistances[u];
                minPQ.push({ minDistances[adj], adj });
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;cin >> n >> m;
    //implementing using adjacency list
    vector<vector<int>> graph(n);
    vector<vi> weight(n, vector<int>(n, INT_MAX));
    for (int i = 0;i < m;i++) {
        int u, v, w;cin >> u >> v >> w;
        graph[u].push_back(v);
        weight[u][v] = w;
    }
    vector<int> minDistances(n, INT_MAX);
    int source;
    cin >> source;
    dijkstra(graph, weight, minDistances, source);
    for (int i = 0;i < n;i++) {
        cout << i << " : " << minDistances[i] << " ";
    }



    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// void dijkstra(vector<vector<pair<int, int>>>& graph, vector<int>& minDistances, int source) {
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//     minDistances[source] = 0;
//     pq.push({ 0, source });

//     while (!pq.empty()) {
//         int dist = pq.top().first;
//         int u = pq.top().second;
//         pq.pop();

//         // Skip if we've found a better path already
//         if (dist > minDistances[u]) continue;

//         // Process all neighbors
//         for (auto& edge : graph[u]) {
//             int v = edge.first;   // adjacent vertex
//             int weight = edge.second;  // edge weight

//             // Relaxation
//             if (minDistances[u] != INT_MAX && minDistances[u] + weight < minDistances[v]) {
//                 minDistances[v] = minDistances[u] + weight;
//                 pq.push({ minDistances[v], v });
//             }
//         }
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int n, m;
//     cin >> n >> m;

//     // Adjacency list with weights: graph[u] contains pairs (v, weight)
//     vector<vector<pair<int, int>>> graph(n);

//     for (int i = 0; i < m; i++) {
//         int u, v, w;
//         cin >> u >> v >> w;
//         // If input is 1-indexed, uncomment:
//         // u--; v--;
//         graph[u].push_back({ v, w });
//     }

//     vector<int> minDistances(n, INT_MAX);
//     int source;
//     cin >> source;
//     // If input is 1-indexed, uncomment:
//     // source--;

//     dijkstra(graph, minDistances, source);

//     for (int i = 0; i < n; i++) {
//         cout << i << " : ";
//         if (minDistances[i] == INT_MAX)
//             cout << "INF" << endl;
//         else
//             cout << minDistances[i] << endl;
//     }

//     return 0;
// }