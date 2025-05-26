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
    vi d(n);
    for (int i = 0; i < n; i++)
        cin >> d[i];

    vi l(n), r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
    }

    vi possible_min(n + 1), possible_max(n + 1);
    possible_min[0] = possible_max[0] = 0;

    for (int i = 0; i < n; i++)
    {
        if (d[i] == 0)
        {
            possible_min[i + 1] = possible_min[i];
            possible_max[i + 1] = possible_max[i];
        }
        else if (d[i] == 1)
        {
            possible_min[i + 1] = possible_min[i] + 1;
            possible_max[i + 1] = possible_max[i] + 1;
        }
        else
        {
            possible_min[i + 1] = possible_min[i];//0
            possible_max[i + 1] = possible_max[i] + 1;//1
        }

        possible_min[i + 1] = max(possible_min[i + 1], l[i]);
        possible_max[i + 1] = min(possible_max[i + 1], r[i]);

        if (possible_min[i + 1] > possible_max[i + 1])
        {
            cout << -1 << endl;
            return;
        }
    }

    vi h(n + 1);
    h[n] = possible_max[n]; 

    for (int i = n - 1; i >= 0; i--)
    {
        if (d[i] != -1)
        {
            h[i] = h[i + 1] - d[i];
            
        }
        else
        {
            
            if (h[i + 1] >= possible_min[i] && h[i + 1] <= possible_max[i])
            {
                d[i] = 0;
                h[i] = h[i + 1];
            }
            else if (h[i + 1] - 1 >= possible_min[i] && h[i + 1] - 1 <= possible_max[i])
            {
                d[i] = 1;
                h[i] = h[i + 1] - 1;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << d[i]<<" ";
        
    }
    cout << endl;
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