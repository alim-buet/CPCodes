#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <bitset>
#include <numeric>
#include <limits>
#include <cstring>
#include <cassert>
#include <list>
#include <tuple>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long

void solve()
{
    int n, chunkCount, chunkSize;
    cin >> n >> chunkSize >> chunkCount;
    vl arr(n), presum(n);
    cin >> arr[0];
    presum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        presum[i] = presum[i - 1] + arr[i];
    }

    vector<vl> dp(n + 1, vl(chunkCount + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= chunkCount; j++)
        {
            dp[i][j] = dp[i - 1][j];

            if (j > 0 && i >= chunkSize)
            {
                ll sumChunk = presum[i - 1] - presum[i - chunkSize - 1];
                //0
                if (i - chunkSize == 0) 
                    sumChunk = presum[i - 1];
                dp[i][j] = max(dp[i][j], dp[i - chunkSize][j - 1] + sumChunk);
                // cout << "sum chunk = " << sumChunk << endl;
            }
        }
    }

    cout << dp[n][chunkCount] << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
