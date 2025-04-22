#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        vector<int> result(n + 1, -1);
        vector<bool> visited(n + 1, false);
        string col;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        cin >> col;

        for (int i = 1; i <= n; i++) {
            if (visited[i]) continue;

            vector<int> cycle;
            int current = i;
            while (!visited[current]) {
                visited[current] = true;
                cycle.push_back(current);
                current = arr[current];
            }

            int black_count = 0;
            for (int node : cycle) {
                if (col[node - 1] == '0') black_count++;
            }

            for (int node : cycle) {
                result[node] = black_count;
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
