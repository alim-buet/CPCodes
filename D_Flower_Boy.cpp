
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define ll long long
#define vl vector<long long>
#define fori                    \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> arr[i];          \
    }

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<int> preFor(n + 1, 0), preBack(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        if (preFor[i] < m and a[i] >= b[preFor[i]])
        {
            preFor[i + 1] = preFor[i] + 1;
        }
        else
            preFor[i + 1] = preFor[i];
    }
    if (preFor[n] == m)
    {
        // matched all
        cout << 0 << endl;
        return;
    }
    preBack[n] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (preBack[i + 1] < m && a[i] >= b[m -1- preBack[i + 1]] )
        {
            preBack[i] = preBack[i + 1] + 1;
        }
        else
            preBack[i] = preBack[i + 1];
    }

    int ans = INT_MAX;
    for (int i = 0; i <= n; i++)
    {
        if (preFor[i] < m && preFor[i] + preBack[i] + 1 >= m)
        {
            
            ans = min(ans, b[preFor[i]]);
        }
    }
    if (ans == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
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