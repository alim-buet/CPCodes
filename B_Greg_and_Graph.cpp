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
    const int inf = 1e9;
    cin >> n;
    // form te graph bottomup, store the ans,m show the answer in rev order
    vector<vector<ll>> dist(n, vector<ll>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> dist[i][j];

    vi x(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i];
        x[i]--;
    }

    vector<bool> added(n, false);
    vector<ll> answer;
    reverse(x.begin(), x.end());

    for (int k = 0; k < n; ++k)
    {
        int vk = x[k];
        added[vk] = true;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                dist[i][j] = min(dist[i][j], dist[i][vk] + dist[vk][j]);
            }
        }

        ll sum = 0;
        for (int i = 0; i < n; ++i)
            if (added[i])
            {
                for (int j = 0; j < n; ++j)
                    if (added[j])
                    {
                        sum += dist[i][j];
                    }
            }
        answer.push_back(sum);
    }

    reverse(answer.begin(), answer.end());
    for (ll val : answer)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
