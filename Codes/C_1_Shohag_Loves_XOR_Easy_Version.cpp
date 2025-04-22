#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    ll num, limit;
    cin >> num >> limit;
    ll lenNum = 64 - __builtin_clzll(num), total = 0;

    // Check all values starting from smallest bit length up to the limit
    ll currentLen = lenNum;
    while ((1LL << currentLen) <= limit) {
        ll start = (currentLen == lenNum) ? 1 : (1LL << (currentLen - 1));
        ll end = min(1LL << currentLen, limit + 1);

        for (ll val = start; val < end; val++) {
            if (num != val) {
                ll xorResult = num ^ val;
                if (num % xorResult == 0 || val % xorResult == 0) {
                    total++;
                }
            }
        }
        currentLen++;
    }

    cout << total << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}