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
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    if ((arr[0] + arr[n - 1]) % 2 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        int op1 = n - 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[0] % 2 != arr[i] % 2)
            {
                op1 = i;
                break;
            }
        }
        int op2 = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[n - 1] % 2 != arr[i]%2)
            {
                op2 = (n - 1 - i);
                break;
            }
        }
        cout << min(op1, op2) << endl;
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