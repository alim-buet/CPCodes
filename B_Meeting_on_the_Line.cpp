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
#define yes     cout << "YES" << endl
#define no      cout << "NO" << endl
#define vi      vector<int>
#define vl      vector<long long>
#define pii     pair<int, int>
#define pll     pair<long long, long long>
#define ll      long long

void solve() {
    int n;
    cin >> n;
    vi x(n), t(n);
    for (int i = 0; i < n;i++){
        cin >> x[i];
    }
    for (int i = 0; i < n;i++){
        cin >> t[i];
    }
    vi allPossible;
    for (int i = 0; i < n;i++){
        allPossible.push_back(x[i] + t[i]);
        allPossible.push_back(x[i] - t[i]);

    }
    sort(allPossible.begin(), allPossible.end());
    cout << setprecision(6) << fixed << (double)(allPossible[allPossible.size() - 1] + allPossible[0]) / 2.00 << endl;
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