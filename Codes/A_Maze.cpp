#include <bits/stdc++.h>
using namespace std;

#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int countX = 0;
int k;

void dfs(int i, int j, vector<vector<int>>& visited, vector<vector<char>>& maze) {
    int n = visited.size();
    int m = visited[0].size();

    if (countX >= k) return;
    visited[i][j] = 1;

    if (i - 1 >= 0 && visited[i - 1][j] == 0 && maze[i - 1][j] == '.') {
        dfs(i - 1, j, visited, maze);
    }
    if (i + 1 < n && visited[i + 1][j] == 0 && maze[i + 1][j] == '.') {
        dfs(i + 1, j, visited, maze);
    }
    if (j - 1 >= 0 && visited[i][j - 1] == 0 && maze[i][j - 1] == '.') {
        dfs(i, j - 1, visited, maze);
    }
    if (j + 1 < m && visited[i][j + 1] == 0 && maze[i][j + 1] == '.') {
        dfs(i, j + 1, visited, maze);
    }

    if (countX < k) {
        maze[i][j] = 'X';
        countX++;
    }
    if (countX >= k) return;
}

void solve() {
    int n, m;
    cin >> n >> m >> k;

    vector<vector<char>> maze(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> maze[i][j];
        }
    }

    int start_i = -1, start_j = -1;
    for (int i = 0; i < n && start_i == -1; i++) {
        for (int j = 0; j < m; j++) {
            if (maze[i][j] == '.') {
                start_i = i;
                start_j = j;
                break;
            }
        }
    }

    vector<vector<int>> visited(n, vector<int>(m, 0));
    dfs(start_i, start_j, visited, maze);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << maze[i][j];
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
