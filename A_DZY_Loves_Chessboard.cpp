#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void dfs(vector<vector<char>>& grid, int i, int j, char parentColor) {
    int n = grid.size();
    int m = grid[0].size();
    if (i < 0 or i >= n) return;
    if (j < 0 or j >= m) return;
    if (grid[i][j] != '.') return;

    if (parentColor == -1) {
        grid[i][j] = 'W';
        parentColor = 'W';
    }
    else if (parentColor == 'W') {
        grid[i][j] = 'B';
        parentColor = 'B';
    }
    else {
        grid[i][j] = 'W';
        parentColor = 'W';
    }
    dfs(grid, i + 1, j, parentColor);
    dfs(grid, i - 1, j, parentColor);
    dfs(grid, i, j + 1, parentColor);
    dfs(grid, i, j - 1, parentColor);


}

int main() {
    int n, m;cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            cin >> grid[i][j];
        }
    }
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            if (grid[i][j] == '.') {
                dfs(grid, i, j, -1);
            }
        }
    }
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }






    return 0;
}