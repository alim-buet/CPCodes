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
    int n;
    cin >> n;
    int flag = 1;
    vi group1(n, 0), group2(n, 0);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        x--, y--;
        if (flag == 0)
            continue;
        if (x == y)
        {
            flag = 0;
            continue;
        }
        if (group1[x] == 0 && group1[y] == 0)
        {
            group1[x] = 1;
            group1[y] = 1;
        }
        else
        {
            if (group2[x] == 0 && group2[y] == 0)
            {
                group2[x] = 1;
                group2[y] = 1;
            }
            else
            {
                flag = 0;
                continue;
            }
        }
    }

    if (flag)
        yes;
    else
        no;
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