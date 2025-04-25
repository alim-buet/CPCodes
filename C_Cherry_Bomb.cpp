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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    int maxA = -2, minA = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxA = max(maxA, a[i]);
        minA = min(minA, a[i]);
    }
    int minusCnt = 0;
    int compSum = -1;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] == -1)
            minusCnt++;
        else
        {
            int sm = b[i] + a[i];
            if (compSum == -1)
                compSum = sm;
            else
            {
                if (compSum != sm)
                {
                    flag = 0;
                }
            }
        }
    }
    // cout << "looo end" << endl;
    if (flag == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if (minusCnt == n)
        {
            cout << ((k + minA) - maxA + 1) << endl;
        }
        else
        {
            int flag2 = 1;
            for (int i = 0; i < n; i++)
            {
                if (compSum - a[i] > k || a[i]>compSum)
                {
                    flag2 = 0;
                    break;
                }
            }
            if (flag2)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
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
