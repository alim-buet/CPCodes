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
#include <iomanip>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define vl      vector<long long>
#define pii     pair<int, int>
#define pll     pair<long long, long long>
#define ll      long long

void solve() {
    //reduce the prlm to the easy verison
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k - 3;i++) {
        cout << "1 ";
    }
    n = n - (k - 3);
    k =3;
    if (n % 2)
    {
        cout << 1 << " " << (n / 2) << " " << (n / 2) << endl;
    }
    else
    {
        if (n % 4)
        {
            cout << 2 << " " << (n / 2 - 1) << " " << (n / 2 - 1) << endl;
        }
        else
        {
            cout << n / 4 << " " << (n / 4) << " " << (n / 2) << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}