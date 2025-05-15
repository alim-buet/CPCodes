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
        cin >> arr[i];
    string s;
    cin >> s;
    int zero_xor = 0;
    int one_xor = 0;
    vi prexor(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            zero_xor ^= arr[i];
        }
        else
            one_xor ^= arr[i];
        if (i == 0)
            prexor[i] = arr[i];
        else
            prexor[i] = prexor[i - 1] ^ arr[i];
    }
    int q;

    cin >> q;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 2)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                cout << zero_xor << " ";
            }
            else
                cout << one_xor << " ";
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            int xr = prexor[r] ^ prexor[l] ^ arr[l];
            zero_xor ^= xr;
            one_xor ^= xr;
        }
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