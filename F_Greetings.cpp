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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
//i am restricted by the technology of my time
void solve()
{
    int n;
    cin >> n;
    vector<pii> start_end(n);
    for (int i = 0; i < n; i++)
    {
        int s, e;
        cin >> s >> e;
        start_end[i] = {s, e};
    }

    sort(start_end.begin(), start_end.end(), [](const pii &a, const pii &b)
         { return a.second < b.second; });

    ordered_set start_pos;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ll count = start_pos.size() - start_pos.order_of_key(start_end[i].first);
        ans += count;
        start_pos.insert(start_end[i].first);
    }

    cout << ans << endl;
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
