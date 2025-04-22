#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int dp[10000];
int main() {
    int n, amount;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0;i < n;i++) {
        cin >> coins[i];
    }
    cin >> amount;
    int dp[amount + 7];
    fill(dp, dp + amount + 7, 10000);
    dp[0] = 0;
    for (int due = 1;due <= amount;due++) {
        for (int ci = 0;ci < n;ci++) {
            if (due - coins[ci] >= 0) {
                if (dp[due - coins[ci]] != 10000) {
                    dp[due] = min(dp[due], dp[due - coins[ci]] + 1);
                }
            }
        }
    }
    if (dp[amount] != 10000) cout << dp[amount] << endl;
    else cout << (-1) << endl;
    return 0;
}