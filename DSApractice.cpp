#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e6 + 7;
const int MOD = 998244353;
const int INF = 0x3f3f3f3f;

void solve()
{
    vector<int> a(3);
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    if (a[1] % a[0] != 0 || a[2] % a[0] != 0 || a[1] / a[0] + a[2] / a[0] > 5)
        cout << "NO\n";
    else
        cout << "YES\n";
}
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int _ = 1;
    cin >> _;
    while (_--)
        solve();
}
