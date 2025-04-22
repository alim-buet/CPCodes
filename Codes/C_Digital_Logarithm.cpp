#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
int f(int x) {
    int count = 0;
    while (x) {
        x /= 10;
        count++;
    }
    return count;
}

void solve() {
    int n;cin >> n;
    int ans = 0;
    map<int, int> mp1, mp2;
    for (int i = 0;i < n;i++) {
        int x;cin >> x;
        mp1[x]++;
    }
    for (int i = 0;i < n;i++) {
        int y;cin >> y;
        mp2[y]++;
    }
    for (auto p : mp1) {
        if (p.first >= 10) {
            int common = min(mp1[p.first], mp2[p.first]);
            mp1[p.first] -= common;
            mp2[p.first] -= common;
            if (mp1[p.first]) {
                ans += mp1[p.first];
                mp1[f(p.first)] += mp1[p.first];
                mp1[p.first] = 0;
            }
            if (mp2[p.first]) {
                ans += mp2[p.first];
                mp2[f(p.first)] += mp2[p.first];
                mp2[p.first] = 0;
            }

        }
    }
    for (auto p : mp2) {
        if (p.first >= 10) {
            mp2[f(p.first)] += mp2[p.first];
            ans += mp2[p.first];
            mp2[p.first] = 0;
        }

    }

    for (int i = 2; i < 10;i++) {
        int com = min(mp1[i], mp2[i]);
        int unc = max(mp1[i], mp2[i]) - com;
        ans += unc;

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