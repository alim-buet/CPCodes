#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n;
    cin >> n;
    int ncpy = n;

    vi digits;
    int maxd = -1;
    while (ncpy) {
        int d = ncpy % 10;
        ncpy /= 10;
        digits.push_back(d);
        maxd = max(maxd, d);
    }

    reverse(digits.begin(), digits.end());

    cout << maxd << endl;

    for (int i = 0; i < maxd; i++) {
        string s;
        for (int j = 0; j < digits.size(); j++) {
            if (digits[j]) {
                s.push_back('1');
                digits[j]--;
            }
            else {
                s.push_back('0');
            }
        }

        int k = 0;
        while (k < s.size() && s[k] == '0') {
            k++;
        }

        while (k < s.size()) {
            cout << s[k++];
        }
        cout << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
