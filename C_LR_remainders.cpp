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
    ll n, m;
    cin >> n >> m;
    deque<ll> dq;
    ll mult = 1;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mult *= x;
        dq.push_back(x);
    }
    string s;
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        cout << mult % m << " ";
        ll el;
        if (s[i] == 'L')
        {
            el = dq.front();
            dq.pop_front();
        }
        else
        {
            el = dq.back();
            dq.pop_back();
        }
        mult /= el;
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