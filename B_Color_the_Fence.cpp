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
    ll totalPaint;
    cin >> totalPaint;
    vl eachDigitCost(10);
    ll minCost = 1e9;
    for (int i = 1; i < 10; i++) {
        cin >> eachDigitCost[i];
        minCost = min(minCost, eachDigitCost[i]);
    }
    if(minCost > totalPaint) {
        cout << -1 << endl;
        return;
    }
    vector<vector<ll>> dp(10, vector<ll>(totalPaint + 1, -1));
    //dp[i][j] = mane max number of digits with digit upto i and j paint 
    for (int i = 0; i < 10; i++) {
        dp[i][0] = 0; 
    }
    for (int d = 1; d < 10;d++){
        for (int p = 1; p <= totalPaint;p++){
            ll noTake = dp[d - 1][p];
            ll take = -1;
            if(p>=eachDigitCost[d]) {
                take = dp[d][p - eachDigitCost[d]] + 1;
                take = max(take, dp[d - 1][p - eachDigitCost[d]] + 1);
            }
            dp[d][p] = max(noTake, take);
        }
    }
    ll paintLeft = totalPaint;
    string result = "";
    for (int d = 9; d >= 1; d--) {
        while (paintLeft >= eachDigitCost[d] && dp[d][paintLeft] == dp[d][paintLeft - eachDigitCost[d]] + 1) {
            result += to_string(d);
            paintLeft -= eachDigitCost[d];
        }
    }
    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    while (t--) {
        solve();
    }
    return 0;
}