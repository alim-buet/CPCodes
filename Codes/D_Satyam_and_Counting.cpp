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
        int n;cin >> n;
        int x, y;
        vi y_zero_x(n + 1);
        vi y_one_x(n + 1);
        for (int i = 0;i < n;i++) {
            int x, y;cin >> x >> y;
            if (y == 0) {
                y_zero_x[x] = 1;

            }
            else {
                y_one_x[x] = 1;
            }

        }
        int flat_point = 0;
        for (int i = 0;i <= n;i++) {
            if (y_zero_x[i] == 1) {
                flat_point++;
            }
        }
        int high_point = 0;
        for (int i = 0;i <= n;i++) {
            if (y_one_x[i]) {
                high_point++;
            }
        }
        




    }
    return 0;
}