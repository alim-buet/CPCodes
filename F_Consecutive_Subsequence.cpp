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
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> mp;
    int max_last_ind = 0;
    int max_last_el = arr[0];
    int max_count = 1;
    // vi prev(n, -1);
    set<int> present_el;
    present_el.insert(arr[0]);
    mp[arr[0]] = 1;
    for (int i = 1; i < n; i++)
    {
        // check if the element-1 in the array, if so update the ou
        mp[arr[i]] = 1;
        if (mp[arr[i]-1]!=0)
        {
            mp[arr[i]] = mp[arr[i] - 1] + 1;
            if (mp[arr[i]] > max_count)
            {
                max_count = mp[arr[i]];
                max_last_el = arr[i];
                max_last_ind = i;
            }
        }
        present_el.insert(arr[i]);
    }
    vi ans;
    int curel = arr[max_last_ind];
    for (int i = max_last_ind; i >= 0; i--)
    {
        if (arr[i] == curel)
        {
            ans.push_back(i);
            curel--;
        }
    }
    cout << ans.size() << endl;
    reverse(ans.begin(), ans.end());
    for (auto el : ans)
    {
        cout << el+1 << " ";
    }
    cout << endl;
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