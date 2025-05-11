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
    int n, q;
    cin >> n >> q;
    vl arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vl oneCount(n, 0), extraSum(n, 0);
    oneCount[0] = (arr[0] == 1);
    extraSum[0] = (arr[0] - 1);
    for (int i = 1; i < n; i++)
    {
        oneCount[i] += (oneCount[i - 1] + (arr[i] == 1));
        extraSum[i] += (extraSum[i - 1]) + arr[i] - 1;
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == r)
        {
            no continue;
        }
        int one = oneCount[r] - oneCount[l] + (arr[l] == 1);
        ll extra = extraSum[r] - extraSum[l] + (arr[l] - 1);
        if (extra >= one)
        {
            yes
        }
        else
            no
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