#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int minnum = min(a, b);
        int maxnum = max(a, b);
        int d = maxnum - minnum;
        int ans = 0;
        if (d < minnum) {
            ans = d;
            minnum -= d;
            maxnum -= 2 * d;

        }
        else {
            ans = minnum;
            minnum = 0;
        }
        if (minnum == 0) cout << ans << endl;
        else {
            ans += (minnum / 3) * 2;
            if (minnum % 3 == 1) ans += 0;
            else if (minnum % 3 == 2) ans += 1;
            cout << ans << endl;
        }
    }


    return 0;
}