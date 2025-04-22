#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int n, k;cin >> n >> k;
    int mod = 1000000007;
    vl ending_cnt(n + 1, 1), ending_cnt_temp(n + 1, 0);
    vector<vector<int>> divisors(n + 1);
    for (int i = 1;i <= n;i++) {
        for (int j = i;j >= 1;j--) {
            if (i % j == 0) {
                divisors[i].push_back(j);
            }
        }
    }


    for (int len = 2;len <= k;len++) {
        for (int e = 1;e <= n;e++) {
            ending_cnt_temp[e] = 0;

            for (auto el : divisors[e]) {
                ending_cnt_temp[e] += ending_cnt[el] % mod;
            }



        }
        ending_cnt = ending_cnt_temp;

    }
    ll ans = 0;
    for (int i = 1;i <= n;i++) {
        ans = ((ans % mod) + (ending_cnt[i] % mod)) % mod;
    }
    cout << ans << endl;


    return 0;
}