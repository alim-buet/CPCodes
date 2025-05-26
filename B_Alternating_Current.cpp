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
    string s;
    cin >> s;
    int n = s.size();
    if (n % 2)
    {
        cout << "No";
        return;
    }
    stack<char> st;
    st.push(s[0]);
    for (int i = 1; i < n; i++)
    {
        if (st.empty())
            st.push(s[i]);

        else if (st.top() == s[i])
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    if (st.size())
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
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