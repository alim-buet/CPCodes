#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
double length(double a, double b, double c, double d) {
    return sqrt((double)(a - c) * (a - c) + (b - d) * (b - d));
}
void solve() {
    int x, y, k;cin >> x >> y >> k;
    int f = 0;
    for (int i = 1;i <= x;i++) {
        if (f) break;
        for (int j = 0;j <= y;j++) {
            if (length(0, 0, i, j) >= k) {
                
                int xp = ceil(y * (j / (double)i));
                
                if (xp <= x && length(0, y, xp, 0) >= k) {
                    cout << "0 0 " << i << " " << j << endl << "0 " << y << " " << xp << " 0" << endl;
                    f = 1;
                    break;
                }
            }

        }
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