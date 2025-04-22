#include <vector>
#include<cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <deque>
#include <set>
#ifdef __GXX_EXPERIMENTAL_CXX0X__
#include <unordered_map>
#include <cassert>
#endif
#include <ctime>
#include <queue>
#include <stack>
#include<iomanip>
#include <sstream>
#include <cmath>
using namespace std;
typedef pair<int, int> PII;
typedef unsigned long long ll;


void solve(int ncase) {
    int n;
    cin >> n;
    vector<int> cnt(100010, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    vector<ll> dp(100010, 0);
    ll maxf = 0;
    for (int i = 1; i <= 100000; i++) {
        if (i == 1) dp[1] = cnt[1];
        else {
            dp[i] = maxf + i * 1LL * cnt[i];
        }
        maxf = max(maxf, dp[i - 1]);
    }
    cout << *max_element(dp.begin(), dp.end()) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    //cout << setprecision(16) << endl;
#ifdef _zzz_
   //freopen("in.txt", "r", stdin);
   //freopen("out.txt", "w", stdout);
#endif
    int T = 1;
    //scanf("%d", &T);
    //cin >> T;
    int ncase = 0;
    while (T--) {
        solve(++ncase);
    }
}
