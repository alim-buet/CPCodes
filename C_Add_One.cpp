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
const int mod = 1e9 + 7;
void solve(vl &dp)
{

    string n;
    int m;
    cin >> n >> m;

    // vector<ll> dp(m + 10, 0);

    ll ans = 0;
    for (char c : n)
    {
        int d = c - '0';
        ans = (ans + dp[m + d]) % mod;
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    vl dp(200011);
    for (int i = 0; i <= 9; i++)
        dp[i] = 1;
    for (int i = 10; i <= 200010; i++)
    {
        dp[i] = (dp[i - 10] + dp[i - 9]) % mod;
    }

    while (t--)
    {
        solve(dp);
    }
    return 0;
}