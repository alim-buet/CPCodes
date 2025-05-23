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

void solve(vi &precalculated_wt)
{
    // basically knapsack
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "i = " << i << "  wt[i] = " << precalculated_wt[i] << endl;
    // }
    int n, k;
    cin >> n >> k;
    vi b(n), values(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
        cin >> values[i];
    vi wt(n);
    int sum_wt = 0;
    for (int i = 0; i < n; i++)
    {
        wt[i] = precalculated_wt[b[i]];
        sum_wt += wt[i];
    }

    k = min(k, sum_wt);

    vi prev(k + 1, 0), curr(k + 1, 0);

    for (int cap = wt[0]; cap <= k; cap++)
    {
        prev[cap] = values[0];
    }

    for (int i = 1; i < n; i++)
    {
        for (int cap = 0; cap <= k; cap++)
        {
            int notTake = prev[cap];
            int Take = -1;
            if (cap - wt[i] >= 0)
            {
                Take = prev[cap - wt[i]] + values[i];
            }
            curr[cap] = max(curr[cap], max(Take, notTake));
        }
        prev = curr;
        fill(curr.begin(), curr.end(), 0);
    }

    cout << prev[k] << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    const int inf = 1e9;
    vi precalculated_wt(2005, inf);
    precalculated_wt[1] = 0;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            precalculated_wt[i + (i / j)] = min(precalculated_wt[i + (i / j)], precalculated_wt[i] + 1);
        }
    }

    while (t--)
    {
        solve(precalculated_wt);
    }
    return 0;
}
