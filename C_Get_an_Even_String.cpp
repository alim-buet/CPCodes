#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    vi dp(n + 1, 0);
    //dp[i] mane i th element niye even string er jonnot needed operation
    vi lastPos(26, -1);

    for (int i = 1;i <= n;i++) {
        //we have two options , either consider the element and look for its pair, and not consider it
        //option1
        if (lastPos[s[i - 1] - 'a'] != -1) {

            dp[i] = dp[lastPos[s[i - 1] - 'a'] - 1] + (i - lastPos[s[i - 1] - 'a'] - 1);

        }
        else {
            dp[i] = i; //no matching pair.. so everyone dies

        }
        dp[i] = min(dp[i], dp[i - 1] + 1);
        lastPos[s[i - 1] - 'a'] = i;

    }
    cout << dp[n] << endl;


}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();


    }
    return 0;
}