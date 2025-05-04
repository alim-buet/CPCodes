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
    int n, m, x;
    // always ans exits

    cin >> n >> m >> x;
    set<pii> s;
    for (int i = 0; i < m; i++)
    {
        s.insert({0, i + 1});
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        int el;
        cin >> el;
        pii p = *s.begin();
        s.erase(p);
        s.insert({p.first + el, p.second});
        cout << p.second << " ";
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