#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define ll long long
#define vl vector<long long>
#define fori for (int i = 0; i < n; i++) { cin >> arr[i]; }

int minMove(string& s, int ch, int l, int r, vector<vector<int>>& charFreq) {
    if (l == r)
        return s[l] - 'a' == ch ? 0 : 1; 

    int mid = (l + r) / 2;

    int leftMismatch = (mid - l + 1) - (charFreq[ch][mid] - charFreq[ch][l - 1]);
    int rightMismatch = (r - mid) - (charFreq[ch][r] - charFreq[ch][mid]);

    return min(
        leftMismatch + minMove(s, (ch + 1) % 26, mid + 1, r, charFreq),
        rightMismatch + minMove(s, (ch + 1) % 26, l, mid, charFreq)
    );
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    s = " " + s;  

    vector<vector<int>> charFreq(26, vector<int>(s.length(), 0));
    for (int i = 1; i < s.length(); i++) {
        charFreq[s[i] - 'a'][i] = 1;
    }

    for (int c = 0; c < 26; c++) {
        for (int i = 1; i < s.length(); i++) {
            charFreq[c][i] += charFreq[c][i - 1];
        }
    }

    cout << minMove(s, 0, 1, n, charFreq) << endl;
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
