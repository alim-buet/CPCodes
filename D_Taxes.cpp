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
bool is_prime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
void solve()
{
    ll n;
    cin >> n;
    //  vector<bool> is_prime(n + 1, true);
    //  is_prime[0] = is_prime[1] = false;
    //  for (int i = 2; i * i <= n; i++) {
    //      if (is_prime[i]) {
    //          for (int j = i * i; j <= n; j += i) {
    //              is_prime[j] = false;
    //          }
    //      }
    //  }
    if (n == 2 || n == 3)
    {
        {
            cout << 1 << endl;
            return;
        }
    }
    if (n % 2 == 0)
    {
        cout << 2 << endl;
    }
    else
    {
        if (is_prime(n))
        {
            cout << 1 << endl;
            return;
        }
        if (is_prime(n - 2))
        {
            cout << 2 << endl;
            return;
        }
        cout << 3 << endl;
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