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
    int n, x;
    cin >> n >> x;
    // 3 part
    for (int i = 0; i < x; i++)
    {
        cout << i << " ";
    }
    for (int i = x + 1; i < n; i++)
    {
        cout << i << " ";
    }
    if (x < n)
    {
        cout << x << endl;
    }
    else
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