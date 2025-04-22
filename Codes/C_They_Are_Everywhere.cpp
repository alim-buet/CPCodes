#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int check(vector<vector<int>>& table, int windowSize, unordered_set<int>& uniqCharacters, int n) {
    int first = 0, last = windowSize - 1;
    while (last < n) {
        int isOk = 1;
        for (auto ch : uniqCharacters) {
            int rangeel = table[ch][last];
            if (first > 0) {
                rangeel -= table[ch][first - 1];
            }
            if (rangeel <= 0) {
                isOk = 0;
                break;
            }
        }
        if (isOk) {
            return 1;
        }
        first++;
        last++;
    }
    return 0;
}

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<vector<int>> table(128, vector<int>(n, 0));
    unordered_set<int> st;
    for (int i = 0; i < n; i++) st.insert(s[i]);
    for (int i = 0; i < n; i++) {
        table[s[i]][i] = 1;
    }
    for (int i = 0; i < 128; i++) {
        for (int j = 1; j < n; j++) {
            table[i][j] += table[i][j - 1];
        }
    }
    int lo = 1, hi = n, mid;
    int ans = n;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (check(table, mid, st, n)) {
            ans = mid;
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
