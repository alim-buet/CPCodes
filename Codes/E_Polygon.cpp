#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void dfs(vector<vector<char>>& grid, int i, int j, vector<vector<bool>>& isVisited) {
    int n = grid.size();
    if (i < 0 or i >= n or j < 0 or j >= n) return;
    if (grid[i][j] == '0' or isVisited[i][j]) return;
    isVisited[i][j] = true;
    dfs(grid, i - 1, j, isVisited);
    dfs(grid, i, j - 1, isVisited);

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<char>> grid(n, vector<char>(n));
        for (int i = 0;i < n;i++) {
            for (int j = 0;j < n;j++) {
                cin >> grid[i][j];
            }
        }
        vector<vector<bool>> isVisited(n, vector<bool>(n, false));
        for (int i = n - 1;i >= 0;i--) {
            int j = n - 1;
            if (grid[i][j] == '1' and !isVisited[i][j]) {
                dfs(grid, i, j, isVisited);
            }
        }
        for (int j = n - 1;j >= 0;j--) {
            int i = n - 1;
            if (grid[i][j] == '1' and !isVisited[i][j]) {
                dfs(grid, i, j, isVisited);
            }
        }
        bool ispossible = true;
        for (int i = 0;i < n;i++) {
            for (int j = 0;j < n;j++) {
                if (grid[i][j] == '1' and isVisited[i][j] == false) {

                    ispossible = false;
                    break;
                }
            }
        }
        if (ispossible) yes
        else no

    }
    return 0;
}