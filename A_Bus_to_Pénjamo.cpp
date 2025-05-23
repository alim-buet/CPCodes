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
    int n, r;
    cin >> n >> r;
    int single_guys = 0;
    int row_used = 0;
    int total_member = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
       
        cin >> x;
        total_member += x;

        row_used += (x / 2);
        if (x % 2)
            single_guys++;
    }
    if ((r - row_used) >= single_guys)
    {
        cout << total_member << endl;
    }
    else
    {
        cout << row_used*2 + (r-row_used - (single_guys-(r-row_used))) << endl;
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