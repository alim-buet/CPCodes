#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        char grid[n][m];
        for (int i = 0;i < n;i++) {
            for (int j = 0;j < m;j++) {
                cin >> grid[i][j];

            }
        }
        if (grid[0][0] == grid[n - 1][m - 1] || grid[0][m - 1] == grid[n - 1][0]) yes
        else {
            if (grid[0][0] == grid[0][m - 1]) {
                int isit = 0;
                for (int k = 0;k < m;k++) {
                    if (grid[n - 1][k] == grid[0][0]) {
                        isit = 1;
                        break;
                    }
                }
                for (int k = 0;k < m;k++) {
                    if (grid[0][k] == grid[n - 1][m - 1]) {
                        isit = 1;
                        break;
                    }
                }
                if (isit) yes
                else no
            }
            else {
                int isit = 0;
                for (int r = 0;r < n;r++) {
                    if (grid[r][m - 1] == grid[0][0] || grid[r][0] == grid[n - 1][m - 1]) {
                        isit = 1;
                        break;
                    }
                }
                if (isit) yes
                else no
            }
        }
    }
    return 0;
}
