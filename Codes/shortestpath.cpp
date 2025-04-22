#include<bits/stdc++.h>
using namespace std;
/*
 what the below function does is that it takes an integer n -- the number of plancs in a fence..
 we have 2 color to color them(green and blue) but the condition is that we cannot color more than 2 consecutive
 plancs with same color.. so our job is to find the number of ways to color all the plancs satisfying the condition
*/
void fencecoloring() {

    int n;
    cin >> n;
    int dp[n + 1][2];
    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[2][1] = 2;
    dp[2][0] = 2;
    for (int i = 3; i <= n; i++)
    {
        for (int j = 0;j < 2;j++) {
            dp[i][j] = dp[i - 1][1 - j] + dp[i - 2][1 - j];
        }
    }
    cout << dp[n][0] + dp[n][1] << endl;




}
//we will solve the coin  change problem now
void coinchange() {
    int n, nod;
    cin >> n >> nod;
    int denos[nod];
    for (int i = 0; i < nod; i++)
    {
        cin >> denos[i];
    }
    sort(denos, denos + nod);
    int dp[n + 1] = { 0 };
    dp[0] = 1;

    for (int i = 1;i <= n;i++) {
        for (int j = 0;j < nod;j++) {
            if (denos[j] > i) {
                continue;
            }
            else {
                dp[i] += dp[i - denos[j]];
            }
        }
    }
    cout << dp[n] << endl;


}
int main() {
    coinchange();

    return 0;
}