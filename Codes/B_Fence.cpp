#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }

    int dp[n];
    dp[0] = 0;
    int j = 0;
    for (int i = 0; i < k; i++)
    {
        dp[0] += arr[i];

    }
    int minimum = dp[0];
    for (int i = 1; i < (n - k + 1); i++)
    {
        dp[i] = dp[i - 1] + arr[k + i - 1] - arr[i - 1];
        if (min(minimum, dp[i]) == dp[i]) {
            minimum = dp[i];
            j = i;
        }
    }
    cout << j + 1 << endl;




    return 0;
}