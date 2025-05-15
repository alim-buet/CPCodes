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
    int n;
    cin >> n;
    vl arr(n);
    ll totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        totalSum += arr[i];
    }

    if (totalSum % 3 != 0)
    {
        cout << 0 << endl;
        return;
    }

    ll target = totalSum / 3;

    vi forward_ind, backward_ind;
    ll presum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        presum += arr[i];
        if (presum == target)
            forward_ind.push_back(i);
    }

    presum = 0;

    for (int i = n - 1; i > 0; i--)
    {
        presum += arr[i];
        if (presum == target)
            backward_ind.push_back(i);
    }

    sort(backward_ind.begin(), backward_ind.end());

    ll ans = 0;

    for (int i : forward_ind)
    {
        auto it = upper_bound(backward_ind.begin(), backward_ind.end(), i + 1);
        ans += (backward_ind.end() - it);
    }

    cout << ans << endl;
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