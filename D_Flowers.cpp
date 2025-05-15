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
const int mod = 1000000007;
long long nCr(long long n, long long r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    r = min(r, n - r);
    long long result = 1;
    for (long long i = 1; i <= r; ++i)
    {
        result = (result % mod * ((n - i + 1) / i) % mod) % mod;
    }
    return result;
}
void solve()
{
    int t, k;
    cin >> t >> k;
    vl dp(100001, 0);
    for (int i = 0; i < k; i++)
        dp[i] = 1;
    dp[k] = 2;
    for (int i = k + 1; i <= 100000; i++)
    {
        // we can put a R or a W at that position,
        dp[i] = dp[i - 1];
        if (i - k >= 0)
        {
            dp[i] =( dp[i] +dp[i - k])%mod;
        }
    }
    // for (int i = 0; i <= 10; i++)
    // {
    //     cout << "dp[" << i << "] = " << dp[i] << endl;
    // }

    for (int i = 1; i <= 100000; i++)
    {
        dp[i] =  (dp[i]+dp[i-1])%mod;
    }
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << (dp[r] - dp[l - 1]+mod)%mod << endl;
    }
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