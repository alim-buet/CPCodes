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
    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;
    const int mod = 100000000;
    vector<vector<vector<vector<long long>>>> dp(n1 + 1, vector<vector<vector<long long>>>(n2 + 1, vector<vector<long long>>(k1 + 1, vector<long long>(k2 + 1, 0))));
    dp[0][0][0][0] = 1;
    for (int i = 0; i <= n1; i++)
    {
        for (int j = 0; j <= n2; j++)
        {
            for (int k = 0; k <= k1; k++)
            {
                for (int l = 0; l <= k2; l++)
                {
                    if (i < n1 && k < k1)
                    {
                        dp[i + 1][j][k + 1][0] = (dp[i + 1][j][k + 1][0] + dp[i][j][k][l]) % mod;
                    }
                    if (j < n2 && l < k2)
                    {
                        dp[i][j + 1][0][l + 1] = (dp[i][j + 1][0][l + 1] + dp[i][j][k][l])%mod;
                    }
                }
            }
        }
    }
    long long ans = 0;
    for (int i = 0; i <= k1; i++)
    {
        for (int j = 0; j <= k2; j++)
        {
            ans = (ans + dp[n1][n2][i][j]) % mod;
        }
    }
    cout << ans % mod << endl;
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