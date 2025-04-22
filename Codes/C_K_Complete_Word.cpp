#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n, k;cin >> n >> k;
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    int ans = 0;
    for (int pos = 0;pos < k / 2;pos++) {
        for (int chunk = 0;chunk < n / k;chunk++) {
            freq[s[chunk * k + pos] - 'a']++;
            freq[s[chunk * k + (k - pos) - 1] - 'a']++;
        }
        int maxans = -1;
        for (int l = 0;l < 26;l++) {
            maxans = max(maxans, freq[l]);
        }
        ans += max(0, (2 * (n / k) - maxans));

        for (int dx = 0;dx < 26;dx++) freq[dx] = 0;

    }
    if (k % 2) {
        for (int ind = k / 2;ind <= (n - k / 2 - 1);ind += k) {
            freq[s[ind] - 'a']++;
        }
        int maxd = -1;
        for (int f = 0;f < 26;f++) {
            maxd = max(maxd, freq[f]);
        }
        ans += max(0, (n / k - maxd));
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