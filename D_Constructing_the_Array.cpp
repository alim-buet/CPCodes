#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define ll long long
#define vl vector<long long>

bool comp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    if (a.first != b.first)
        return a.first < b.first;
    return a.second.first > b.second.first;
}

void solve()
{
    int n;
    cin >> n;
    priority_queue<
        pair<int, pair<int, int>>,
        vector<pair<int, pair<int, int>>>,
        decltype(&comp)>
        pq(comp);

    vector<int> ans(n + 1, 0);
    pq.push({n, {1, n}});
    int i = 1;
    while (!pq.empty())
    {
        pair<int, pair<int, int>> p = pq.top();
        pq.pop();
        int l = p.second.first;
        int r = p.second.second;
        if (l == r && ans[l])
            continue;
        else
        {
            int mid = (l + r) / 2;
            ans[mid] = i;
            i++;
            if ((mid - l) >= 1)
            {
                pq.push({mid - l, {l, mid - 1}});
            }
            if ((r - mid) >= 1)
            {
                pq.push({r - mid, {mid + 1, r}});
            }
        }
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
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
