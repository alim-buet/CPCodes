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
    vector<vi> tree(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (arr[0] != 1)
    {
        cout << "No" << endl;
        return;
    }
    else
    {
        vi visited(n + 1, 0);
        visited[1] = 1;
        int r = 0;
        for (int l = 0; l < n; l++)
        {
            int child_count = 0;
            

            for (int child : tree[arr[l]])
            {
                if(visited[child]==0)
                    child_count++;
                visited[child] = 1;

            }
            // cout << "for node = " << arr[l] << "Child count = " << child_count << endl;
            while (child_count--)
            {
                r++;
                if (visited[arr[r]] == 0)
                {
                    cout << "No" << endl;
                    return;
                }
            }
        }
        cout << "Yes" << endl;
    }
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