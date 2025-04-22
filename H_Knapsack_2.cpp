#include<bits/stdc++.h>
using namespace std;
long long dp[101][100003];
long long maxsum(int n, int capacity, vector<int>weights, vector<int>values) {
    if (dp[n][capacity] != -1) return dp[n][capacity];
    if (n == 0) return dp[n][capacity] = 0;
    if (capacity >= weights[n]) {
        dp[n][capacity] = maxsum(n - 1, capacity - weights[n], weights, values) + values[n];
    }
    return dp[n][capacity] = max(dp[n][capacity], maxsum(n - 1, capacity, weights, values));
}
int main() {
    memset(dp, -1, sizeof(dp));
    int n, capacity;
    cin >> n >> capacity;
    vector<int> weights(n + 1), values(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> weights[i] >> values[i];
    }
    cout << maxsum(n, capacity, weights, values) << endl;




    return 0;
}