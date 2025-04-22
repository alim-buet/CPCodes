#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n, m;cin >> n >> m;
    vi trailing_zero_counts(n);
    ll total_digits = 0;
    for (int i = 0;i < n;i++) {
        int x;
        cin >> x;
        int done = 0;
        int trailing = 0;

        while (x) {
            if (x % 10 == 0) {
                if (!done) {
                    trailing++;
                }
            }
            else {
                done = 1;

            }
            x /= 10;
            total_digits++;
        }
        trailing_zero_counts[i] = trailing;
    }
    sort(trailing_zero_counts.begin(), trailing_zero_counts.end(), greater<int>());
    for (int i = 0;i < n;i += 2) {
        if (trailing_zero_counts[i] == 0) break;
        else {
            total_digits -= trailing_zero_counts[i];
        }
    }
    if (total_digits > m) cout << "Sasha" << endl;
    else cout << "Anna" << endl;

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