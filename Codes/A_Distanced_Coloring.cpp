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
        int r, c, k;
        cin >> r >> c >> k;
        int x, y;
        if (r > k) x = k;
        else x = r;
        if (c > k) y = k;
        else y = c;
        cout << x * y << endl;
    }
    return 0;
}