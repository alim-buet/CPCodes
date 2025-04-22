#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0;i < n;i++) {
            cin >> grid[i];
        }

        int k = -1;
        int y1 = -1;
        int found = 0;
        for (int i = 0;i < n;i++) {
            for (int j = 0;j < m;j++) {
                if (grid[i][j] == '#') {
                    k = j;
                    y1 = i;
                    found = 1;
                    break;
                }
            }
            if (found) break;
        }
        int y2 = y1;


        for (int r = y1;r < n;r++) {
            if (grid[r][k] == '#') {
                y2 = r;
            }

        }

        int h = y1 + (y2 - y1) / 2;
        cout << h + 1 << " " << k + 1 << endl;

    }
    return 0;
}