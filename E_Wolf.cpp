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
    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 1), pos(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pos[arr[i]] = i;
    }
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int small_need = 0, big_need = 0;
        int small_used = 0, big_used = 0;

        if (!(pos[k] >= l && pos[k] <= r))
        {
            cout << -1 << " ";
            // cout << "dkdk";
            continue;
        }
        else
        {
            int mid = (l + r) / 2;
            while (arr[mid] != k)
            {

                int el = arr[mid];
                // cout << "el is = " << el;
                if (el > k)
                {

                    if ((pos[el] < pos[k]))
                    {
                        // that will push it to the left but need to go to ther right
                        small_need++;
                    }
                    else
                    {
                        big_used++;
                    }
                }
                else
                {
                    if (pos[k] < pos[el])
                    {
                        big_need++;
                    }
                    else
                    {
                        small_used++;
                    }
                }
                if (pos[el] < pos[k])
                {
                    l = mid + 1;
                    mid = (l + r) / 2;
                }
                else
                {
                    r = mid - 1;
                    mid = (l + r) / 2;
                }
            }
        }
        if ((small_need + small_used) > (k - 1) || (big_need + big_used) > (n - k))
        {
            cout << -1 << " ";
        }
        else
        {
            cout << min(small_need, big_need) * 2 + (max(small_need, big_need) - min(small_need, big_need)) * 2 << " ";
        }
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