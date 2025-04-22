#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans;
        cin >> n;
        int set = __builtin_popcount(n);
        if ((set == 1) && (n == 1)) ans = 3;
        else if (set == 1) ans = n + 1;

        else {
            int x = 0;
            for (int i = 0;i < 30;i++) {
                if (((n >> i) & 1) == 1) {
                    x = i;
                    break;
                }
            }
            ans = (1 << x);
        }
        cout << ans << endl;
    }

    return 0;
}