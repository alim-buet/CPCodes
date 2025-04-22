#include<bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
    vector<int> dp(20000000, 0);

    for (int i = 2; i <= 20000000; i++) {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
    }


    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;

        cout << "Case " << i << ": " << dp[n] << endl;
    }

    return 0;
}
