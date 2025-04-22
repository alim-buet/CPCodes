
//solved using iterative method

#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int n;
    cin >> n;
    vector<int> seq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> seq[i];
    }
    int dp[10000];
    memset(dp, 1, sizeof(dp));
    int ans = 1;
    dp[0] = 1;
    int mainans = 1;
    for (int i = 1; i < n; i++)
    {
        ans = 1;
        for (int j = i - 1;j >= 0;j--) {
            if (seq[i] > seq[j]) {
                ans = max(ans, dp[j] + 1);
            }
        }
        dp[i] = ans;
        mainans = max(ans, mainans);

    }
    cout << mainans << endl;




    return 0;
}