#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long

bool isValidExpression(const string& s) {
    int balance = 0;
    for (char c : s) {
        if (c == '(') balance++;
        else balance--;
        if (balance < 0) return false;
    }
    return balance == 0;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int openingCount = 0, closingCount = 0;
    for (char c : s) {
        if (c == '(') openingCount++;
        else closingCount++;
    }

    if (openingCount != closingCount) {
        cout << -1 << endl;
        return;
    }

    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());


    if (isValidExpression(s) || isValidExpression(reversed_s)) {
        cout << 1 << endl;
        for (int i = 0; i < n; i++) cout << "1 ";
        cout << endl;
        return;
    }

    vi ans(n, 2);
    stack<int> forward, backward;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            forward.push(i);
        }
        else {
            if (!forward.empty()) {
                ans[forward.top()] = 1;
                forward.pop();
                ans[i] = 1;
            }
            else {
                backward.push(i);
            }
        }
    }

    cout << 2 << endl;
    for (int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
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
