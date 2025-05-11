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
        cin >> arr[i];
    int count = 0;
    unordered_map<ll, int> cumSum;
    cumSum[arr[0]]++;
    ll currSum = arr[0];
    cumSum[0]++;

    for (int i = 1; i < n; i++)
    {
        currSum += arr[i];
        if (cumSum[currSum])
        {
            count++;
            cumSum.clear();
            currSum = arr[i];
            cumSum[currSum]++;
            cumSum[0]++;
        }
        else
        {
            cumSum[currSum]++;
        }
    }
    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}