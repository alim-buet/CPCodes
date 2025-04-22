#include <bits/stdc++.h>
using namespace std;



int main() {
    int cases;
    cin >> cases;
    

    for (int i = 1; i <= cases; i++) {
        int a, b, c, d, e, f, n;
        cin >> a >> b >> c >> d >> e >> f >> n;
        long long dp[10006];

        dp[0] = a;
        dp[1] = b;
        dp[2] = c;
        dp[3] = d;
        dp[4] = e;
        dp[5] = f;

        for (int j = 6; j <= n; j++) {
            dp[j] = dp[j - 1] % 10000007 + dp[j - 2] % 10000007 + dp[j - 3] % 10000007 + dp[j - 4] % 10000007 + dp[j - 5] % 10000007 + dp[j - 6] % 10000007;
        }

        cout << "Case " << i << ": " << dp[n] % 10000007 << endl;
    }

    return 0;
}
