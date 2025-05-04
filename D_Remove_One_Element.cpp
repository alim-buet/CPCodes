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
    vl arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vi forward_seq(n + 1, 1);
    vi backward_seq(n + 1, 1);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            forward_seq[i] += forward_seq[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i + 1] > arr[i])
        {
            backward_seq[i] += backward_seq[i + 1];
        }
    }
    int ans = 1;
    for (int i = 0; i < n; ++i)
    {
        ans = max(ans, forward_seq[i]); 
    }

    for (int i = 1; i < n - 1; ++i)
    {
        //remove cond chekc
        if (arr[i - 1] < arr[i + 1])
        {
            ans = max(ans, forward_seq[i - 1] + backward_seq[i + 1]);
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}