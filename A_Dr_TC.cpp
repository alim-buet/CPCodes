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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int onecnt = 0;
    for (int i = 0; i < n; i++)
        onecnt += s[i] == '1';
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ans += (onecnt - 1);
        else
            ans += onecnt + 1;
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