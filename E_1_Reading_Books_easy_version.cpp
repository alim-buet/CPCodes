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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> both, onlyAlice, onlyBob;
    for (int i = 0; i < n; i++)
    {
        int t, a, b;
        cin >> t >> a >> b;
        if (a && b)
        {
            both.push_back(t);
        }
        else if (a)
        {
            onlyAlice.push_back(t);
        }
        else if (b)
        {
            onlyBob.push_back(t);
        }
    }
    sort(onlyAlice.begin(), onlyAlice.end());
    sort(onlyBob.begin(), onlyBob.end());
    
    for (int i = 0; i < min(onlyAlice.size(), onlyBob.size()); i++)
    {
        both.push_back(onlyAlice[i] + onlyBob[i]);
    }
    sort(both.begin(), both.end());
    if (both.size() < k)
        cout << -1 << endl;
    else
    {
        ll ans = 0;
        for (int i = 0; i < k; i++)
        {
            ans += both[i];
        }
        //cout<<both.size() << " " << k << endl;
        cout << ans << endl;
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