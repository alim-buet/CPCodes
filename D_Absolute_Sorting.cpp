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
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define vl      vector<long long>
#define pii     pair<int, int>
#define pll     pair<long long, long long>
#define ll      long long

void solve()
{
    int n;
    cin >> n;
    vl arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll low = 0, high = 1e9;

    for (int i = 0; i < n - 1; i++)
    {
        ll a = arr[i], b = arr[i + 1];
        if (a < b)
        {
            ll mx = (a + b) / 2;
            high = min(high, mx);
        }
        else if (a > b)
        {
            ll mn = (a + b + 1) / 2;
            low = max(low, mn);
        }
    }

    if (low <= high)
        cout << low << endl;
    else
        cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}