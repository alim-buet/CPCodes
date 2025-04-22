#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);

    vi childsCount(n + 1, 0);

    for (int i = 0;i < m;i++) {
        int u, v;
        cin >> u >> v;
        childsCount[u]++;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}