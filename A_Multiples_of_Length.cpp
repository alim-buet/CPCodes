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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << "1 1" << endl
             << -1 * arr[0] << endl
             << "1 1" << endl
             << 0 << endl
             << "1 1" << endl
             << 0 << endl;
    }
    else
    {
        cout << "1 " << n << endl;
        for (int i = 0; i < n - 1; i++)
        {
            cout << -arr[i] * n << " ";
        }
        cout << "0" << endl; 

        cout << "1 " << n - 1 << endl;
        for (int i = 0; i < n - 1; i++)
        {
            cout << arr[i] * (n - 1) << " ";
        }
        cout << endl;

        cout << n << " " << n << endl;
        cout << -arr[n - 1] << endl;
    }
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