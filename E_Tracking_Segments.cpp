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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<pii> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    int q;
    cin >> q;
    vector<int> changes(q + 1);
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        changes[i + 1] = x;
    }
    int low = 1, hi = q + 1, mid;
    while (low < hi)
    {
        mid = (low + hi) / 2;
        vector<int> presum(m + 1);
        for (int i = 0; i <= mid; i++)
        {
            presum[changes[i]]++;
        }
        for (int i = 1; i <= m; i++)
        {
            presum[i] += presum[i - 1];
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            int l = v[i].first, r = v[i].second;
            if (presum[r] - presum[l - 1] > (r - l + 1) / 2)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            hi = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (low == q + 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << low << endl;
    }
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