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
#include <tuple>
#include <string>
#include <sstream>
#include <list>
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
    int nZero, nOne, nTwo;
    cin >> nZero >> nOne >> nTwo;
    list<int> ans;
    if (nOne == 0)
    {
        if (nZero)
        {
            for (int i = 0; i <= nZero; i++)
                cout << 0;
            cout << endl;
            return;
        }
        if (nTwo)
        {
            for (int i = 0; i <= nTwo; i++)
            {
                cout << 1;
            }
            cout << endl;
            return;
        }
    }
    else
    {
        if (nOne % 2)
        {
            for (int i = 0; i < nZero; i++)
                cout << 0;
            int el = 0;
            for (int i = 0; i <= nOne; i++)
            {
                cout << el;
                el = 1 - el;
            }
            for (int i = 0; i < nTwo; i++)
                cout << 1;
            cout << endl;
        }
        else
        {
            for (int i = 0; i < nZero; i++)
                cout << 0;
            int el = 0;
            for (int i = 0; i < nOne; i++)
            {
                cout << el;
                el = 1 - el;
            }
            for (int i = 0; i < nTwo; i++)
                cout << 1;
            cout << 0;
            cout << endl;
        }
    }
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