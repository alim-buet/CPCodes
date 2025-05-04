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
    int n, k, z;
    cin >> n >> k >> z;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int maxScore = 0;

    for (int left = 0; left <= z; ++left)
    {
        int moves = k - 2 * left; 
        if (moves < 0)
            continue;

        int sum = 0, maxPair = 0;
        for (int i = 0; i <= moves; ++i)
        {
            sum += a[i];
            if (i < n - 1)
                maxPair = max(maxPair, a[i] + a[i + 1]);
        }

        int total = sum + left * maxPair;
        maxScore = max(maxScore, total);
    }

    cout << maxScore << endl;
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