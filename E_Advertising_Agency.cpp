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
const int mod = 1e9 + 7;
// long long nCr(long long n, long long r) {
//     if (r > n) return 0;
//     if (r == 0 || r == n) return 1;
//     r = min(r, n - r);
//     long long result = 1;
//     for (long long i = 1; i <= r; ++i) {
//         result = result * (n - i + 1) / i;
//     }
//     return result;
// }
void solve(vector<vl> &nCr)
{
    ll n, k;
    cin >> n >> k;
    vl arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), greater<int>());
    ll last_el = arr[k - 1];
    ll not_last_el_count = 0;
    ll last_count = 0;
    for (int i = 0; i < n && arr[i] >= last_el; i++)
    {
        if (last_el != arr[i])
            not_last_el_count++;
        else
            last_count++;
    }
    cout << nCr[last_count][k - not_last_el_count] << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    vector<vl> nCr(1001, vl(1001, 0));

    for (int n = 0; n <= 1000; n++)
    {
        nCr[n][0] = 1;
        for (int r = 1; r <= n; r++)
        {
            nCr[n][r] = (nCr[n - 1][r - 1] % mod + nCr[n - 1][r] % mod) % mod;
        }
    }
    while (t--)
    {
        solve(nCr);
    }
    return 0;
}