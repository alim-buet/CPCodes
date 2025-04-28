#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define ll long long
#define vl vector<long long>

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    int eql = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 5 == 0)
        {
            eql = 1;
            a[i] += (a[i] % 10);
        }
    }
    if (eql)
    {
        int flag = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] != a[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else{
        bool flag2 = false, flag12 = false;
        for (int i = 0; i < n; ++i)
        {
            int x = a[i];
            while (x % 10 != 2)
            {
                x = x + x % 10;
                ;
            }
            if (x % 20 == 2)
            {
                flag2 = true;
            }
            else
            {
                flag12 = true;
            }
        }
        cout << ((flag2 & flag12) ? "No" : "Yes") << '\n';
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