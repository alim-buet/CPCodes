
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
    vl a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        total += a[i] * b[i];
    }

    ll ans = total;
    for (int mid = 0; mid < n; mid++)
    {
        int l = mid - 1;
        int r = mid + 1;
        ll current = total;
        while (l >= 0 && r < n)
        {
            current -= a[l] * b[l] + a[r] * b[r];
            current += a[l] * b[r] + a[r] * b[l];
            // cout<<"Now current = "<<current<<endl;
            ans = max(ans, current);
            l--;
            r++;
        }
    }

    for (int mid = 0; mid < n - 1; mid++)
    {
        int l = mid;
        int r = mid + 1;
        ll current = total;
        while (l >= 0 && r < n)
        {
            current -= a[l] * b[l] + a[r] * b[r];
            current += a[l] * b[r] + a[r] * b[l];
            // cout<<"Now current = "<<current<<endl;

            ans = max(ans, current);
            l--;
            r++;
        }
    }

    cout << ans << endl;
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