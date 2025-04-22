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
void printSeq(int start, int groupCount)
{
    if (groupCount == 4)
    {
        cout << start + 1 << " " << start + 3 << " " << start << " " << start + 2 << " ";
    }
    else if (groupCount == 5)
    {
        cout << start + 1 << " " << start + 3 << " " << start << " " << start + 2 << " " << start + 4 << " ";
    }
    else if (groupCount == 6)
    {
        cout << start + 1 << " " << start + 3 << " " << start << " " << start + 4 << " " << start + 2 << " " << start + 5;
    }
    else if (groupCount == 7)
    {
        cout << start + 1 << " " << start + 3 << " " << start << " " << start + 4 << " " << start + 6 << " " << start + 2 << " " << start + 5 << " ";
    }
}

void solve()
{
    int n;
    cin >> n;
    if (n <= 3)
        cout << -1;
    else
    {
        int extra = n % 4;
        int fourGroup = (n / 4) - 1;
        int lastCount = 4 + extra;
        for (int i = 0; i < fourGroup; i++)
        {
            printSeq(i * 4 + 1, 4);
        }
        printSeq(fourGroup * 4 + 1, lastCount);
    }
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