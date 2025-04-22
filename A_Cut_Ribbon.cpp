#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>


int main() {


    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int dp[5000] = { 0 };
    dp[0] = 0;
    int ans = -1;
    dp[a] = 1;
    dp[b] = 1;
    dp[c] = 1;

    for (int i = 1;i <= n;i++) {
        if (i - a >= 0 && dp[i - a] > 0) dp[i] = dp[i - a] + 1;
        if (i - b >= 0 && dp[i - b] > 0) dp[i] = max(dp[i], dp[i - b] + 1);
        if (i - c >= 0 && dp[i - c] > 0)  dp[i] = max(dp[i], dp[i - c] + 1);
        //cout << "i = " << i << " dp[i] = " << dp[i] << endl;
    }
    cout << dp[n] << endl;

    return 0;
}