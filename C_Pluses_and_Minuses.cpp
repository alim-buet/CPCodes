#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
ll a[1000005];
void solve() {
    string s;
    cin >> s;
    ll h = 0;
    ll n = s.size();
    ll result = n;
    memset(a, 0, sizeof(a));



    for (ll i = 0; i < s.size(); i++) {
        (s[i] == '+') ? h-- : h++;

        if (h > 0 && a[h] == 0) {
            a[h] = i + 1;
            result += (i + 1);
        }
    }

    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
