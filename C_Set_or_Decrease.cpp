#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <climits>
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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long
void solve()
{
    ll n, k;
    cin >> n >> k;
    vl arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vl cumsum(n);
    cumsum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        cumsum[i] = cumsum[i - 1] + arr[i];
    }
    if (cumsum[n - 1] <= k)
    {
        cout << 0 << endl;
        return;
    }
    if (n == 1)
    {
        cout << arr[0] - k << endl;
        return;
    }

    ll ans = LLONG_MAX;
    for (int y = 0; y < n; y++)
    {
        ll lo = 0;
        ll hi = 1e12;
        while (lo < hi)
        {
            ll mid = (lo + hi) / 2;
            ll sum;
            if (y == n)
            {
                sum = (arr[0] - mid) * n;
            }
            else
            {
                sum = (arr[0] - mid) * (y + 1) + cumsum[n - 1 - y] - cumsum[0];
            }

            if (sum <= k)
            {
                ans = min(ans, mid + y);
                hi = mid;
            }
            else
            {
                lo = mid + 1;
            }
        }
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
    while (t--)
    {
        solve();
    }
    return 0;
}