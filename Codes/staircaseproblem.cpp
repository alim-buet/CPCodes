#include<bits/stdc++.h>
using namespace std;
vector<int> step;
void steps(int n, int dp[]) {
    if (n < 0) return;
    step.push_back(n);
    if (dp[n - 1] < dp[n - 2]) {
        steps(n - 1, dp);
    }
    else {
        steps(n - 2, dp);
    }



}
int main() {
    int n;
    cin >> n;
    int prices[n + 1];
    for (int i = 1;i <= n;i++) {
        cin >> prices[i];
    }
    int dp[n + 1];
    int path[n+1];
    dp[0] = 0;
    dp[1] = prices[1];
    for (int i = 2;i <= n;i++) {
        dp[i] = min(dp[(i - 1)], dp[(i - 2)]) + prices[i];
    }

    cout << dp[n] << endl;
    cout << "Steps are: " << endl;
    steps(n, dp);
    sort(step.begin(), step.end());
    for (int el : step) {
        cout << el << " ";
    }


    return 0;
}