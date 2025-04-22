#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;

    // Identify the longer and shorter string
    string bigs = (s1.size() > s2.size()) ? s1 : s2;
    string smalls = (s1.size() > s2.size()) ? s2 : s1;

    int max_common_length = 0; // Stores the maximum common substring length

    // Find the longest common substring using a brute-force approach
    for (int len = 1; len <= smalls.size(); len++) { // Length of substring to check
        for (int start = 0; start <= smalls.size() - len; start++) {
            // Extract substring of length 'len' from 'smalls'
            string sub = smalls.substr(start, len);

            // Check if this substring exists in 'bigs'
            if (bigs.find(sub) != string::npos) {
                max_common_length = max(max_common_length, len);
            }
        }
    }

    // Calculate the minimum steps needed
    int ans = (s1.size() - max_common_length) + (s2.size() - max_common_length) + max_common_length;
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
