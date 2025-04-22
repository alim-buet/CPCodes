#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    for (int j = 1;j <= t;j++) {
        int a, b, c, d, e, f, n;
        cin >> a >> b >> c >> d >> e >> f >> n;
        long long int dp[100005];
        dp[0] = a;
        dp[1] = b;
        dp[2] = c;
        dp[3] = d;
        dp[4] = e;
        dp[5] = f;
        if (n <= 5) cout << "Case " << j << ": " << dp[n] << endl;
        else {
            for (int i = 6; i <= n; i++)
            {
                dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4] + dp[i - 5] + dp[i - 6]) % 10000007;

            }
            cout << "Case " << j << ": " << dp[n] % 10000007 << endl;

        }

    }






    return 0;
}