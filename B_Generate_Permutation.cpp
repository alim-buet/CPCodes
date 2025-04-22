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
        if (n % 2 == 0) cout << -1 << endl;
        else {
            vi ans(n + 1);
            int a = 1;
            for (int i = n / 2;i < n;i++) {
                ans[i] = a;a += 2;

            }
            a = 2;
            for (int i = 0;i < n / 2;i++) {
                ans[i] = a;
                a += 2;
            }


            for (int i = 0;i < n;i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}