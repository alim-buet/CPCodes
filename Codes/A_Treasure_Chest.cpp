#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k, ans;
        cin >> x >> y >> k;
        if (x > y) ans = x;
        else {
            if ((y - x) < k) ans = y;
            else {
                ans = 2 * y - (x + k);
            }
        }
        cout << ans << endl;
    }

    return 0;
}