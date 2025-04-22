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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> ans(n);
        int el = 1;
        for (int i = n - m;i < n;i++) {
            ans[i] = el;
            el++;
        }
        el = n;

        for (int i = 0;i < n - m;i++) {
            ans[i] = el;
            el--;
        }
        for (int i = 0;i < n;i++) cout << ans[i] << " ";
        cout << endl;





    }
    return 0;
}