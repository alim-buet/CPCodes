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
bool check(vi &arr, int customers, int x)
{
    // Count how many total car assignments are possible for the given customer limit
    // Each customer can take at most x cars of different models
    ll total = 1LL * customers * x;
    for (int a : arr)
    {
        // Each model can contribute at most one car per customer
        total -= min((ll)a, (ll)customers);
    }
    return total >= 0;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int lo = 1, hi = accumulate(arr.begin(), arr.end(), 0LL), ans = hi;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (check(arr, mid, x))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << ans << '\n';
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