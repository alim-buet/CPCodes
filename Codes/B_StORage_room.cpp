#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define ll long long
#define vl vector<long long>
#define fori for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int grid[n][n];
        vi ans(n);

        for (int i = 0; i < n; i++) {
            int initial = (1 << 30) - 1;
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
                if (i != j) {
                    initial &= grid[i][j];
                }
            }
            ans[i] = initial;
        }

        bool isans = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && (ans[i] | ans[j]) != grid[i][j]) {
                    isans = false;
                    break;
                }
            }
            if (!isans) break;
        }

        if (isans) {
            yes
                for (int i = 0; i < n; i++) {
                    cout << ans[i] << " ";
                }
            cout << endl;
        }
        else {
            no
        }
    }
    return 0;
}
