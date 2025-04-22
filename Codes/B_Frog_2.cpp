#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int dp[N];
int n, k;
int solve(int li, int arr[]) {
    int ans = INT_MAX;
    if (li == 0) {
        return 0;

    }
    if (li == 1) {
        return abs(arr[1] - arr[0]);
    }
    if (dp[li] != -1) {
        return dp[li];
    }
    for (int i = 1;i <= k;i++) {
        if((li-i) <0) break;
        
        ans = min(ans, solve(li - i, arr) + abs(arr[li] - arr[li - i]));
    }
    return dp[li] = ans;
}

int main() {

    cin >> n >> k;
    int arr[n];
    int li = n - 1;
    for (int i = 0;i < n;i++) {
        cin >> arr[i];

    }
    memset(dp, -1, sizeof(dp));
    cout << solve(li, arr) << endl;
    return 0;
}