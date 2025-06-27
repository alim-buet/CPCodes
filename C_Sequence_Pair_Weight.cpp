#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include<climits>
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
    int n ;cin>>n;
    vl arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    map<int, vi> mp;
    //mp[i] will store the indices of element i of the main array
    for (int i = 0; i < n; i++) {
        mp[arr[i]].push_back(i);
    }
    ll ans = 0;
    for (auto &it : mp) {
        int x = it.first;
        vi &indices = it.second;
        int m = indices.size();
        if (m == 1) {
            continue;
        }
        vl cumsum(m);
        //including that index
        cumsum[m - 1] = n-indices[m - 1];


        for (int i = m - 2; i >= 0; i--) {
            cumsum[i] = cumsum[i + 1] + n - indices[i];
        }
        // cout<<"for element "<<x<<" indices are: ";
        // for (int i = 0; i < m; i++) {
        //     cout << indices[i] << " ";
        // }

        // cout << endl;
        // cout<<"index cumsum: ";
        // for (int i = 0; i < m; i++) {
        //     cout << cumsum[i] << " ";
        // }
        // cout << endl;

        for (int i = 0; i < m - 1;i++){
            ans+= (indices[i]+1)*cumsum[i + 1];
        }
    }
    cout << ans << endl;
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