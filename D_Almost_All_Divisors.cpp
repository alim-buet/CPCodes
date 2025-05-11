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

bool isPrime(long long n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}
vector<long long> getFactors(long long n)
{
    vector<long long> factors;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            factors.push_back(i);
            if (i != n / i)
            {
                factors.push_back(n / i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    return factors;
}
void solve()
{
    int n;
    cin >> n;
    vl arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (n == 1)
    {
        if (isPrime(arr[0]))
        {
            cout << arr[0] * arr[0] << endl;
        }
        else
            cout << -1 << endl;
        return;
    }
    sort(arr.begin(), arr.end());

    int flag = 1;
    ll num = arr[0] * arr[n - 1];
    for (int i = 0; i <= (n / 2); i++)
    {
        if (num != arr[i] * arr[n - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        cout << -1 << endl;
        return;
    }
    vector<ll> factors = getFactors(num);
    if (factors.size() - 2 == n)
    {
        cout << num << endl;
    }
    else
        cout << -1 << endl;
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