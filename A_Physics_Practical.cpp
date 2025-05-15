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
#include <fstream>
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
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n;
    in >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        in >> arr[i];

    sort(arr.begin(), arr.end());

    int ans = n, j = 0;
    for (int i = 0; i < n; ++i)
    {
        j = max(j, i);
        while (j < n && arr[j] <= 2 * arr[i])
            j++;
        ans = min(ans, n - (j - i));
    }

    out << ans << endl;

    in.close();
    out.close();
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