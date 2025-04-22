#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    ll n;cin >> n;
    ll mx = 1e5 + 5;
    vl counts(mx, 0);
    ll maxel = -1;
    for (int i = 0;i < n;i++) {
        ll x;cin >> x;
        counts[x]++;
        maxel = max(maxel, x);
    }
    vl dp(mx, 0);
    //we will choose the elements in ascending order
    //dp[i] means the max score we can get if we take i at the end
    dp[0] = 0;
    dp[1] = counts[1];
    for (int i = 2;i < mx;i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + i * counts[i]);
    }
    cout << dp[maxel] << endl;


}

int main() {
    solve();
    return 0;
}