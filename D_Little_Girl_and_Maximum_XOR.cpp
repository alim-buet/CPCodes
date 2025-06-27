#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <math.h>
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
int bitCount(ll n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n >>= 1;
    }
    return count;
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    int l_digit_count  =  bitCount(l);
    int r_digit_count = bitCount(r);
    if (r_digit_count > l_digit_count)
    {

        cout << ((1LL << (long long)r_digit_count) - 1LL) << endl;
        // cout << "ddd" << endl;
    }
    else
    {
        vi l_bits, r_bits;
        for (int i = l_digit_count - 1; i >= 0; i--)
        {
            l_bits.push_back((l >> i) & 1);
        }
        for (int i = r_digit_count - 1; i >= 0; i--)
        {
            r_bits.push_back((r >> i) & 1);
        }
        for (int i = 0; i < l_digit_count; i++)
        {
            if (l_bits[i] != r_bits[i])
            {
                cout << ((1LL << (l_digit_count - i)) - 1LL) << endl;
                return;
            }
        }
        cout << 0 << endl;
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