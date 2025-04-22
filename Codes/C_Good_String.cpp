#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }


void solve() {
    string s;
    cin >> s;

    vector<int> freq(10, 0);
    for (char c : s) {
        freq[c - '0']++;
    }

    int max_single = *max_element(freq.begin(), freq.end());

    int max_pair = 0;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (i == j) continue; 

           
            int length = 0;
            bool expect_i = true; //i...j...i...j...
            for (char c : s) {
                if ((expect_i && c - '0' == i) || (!expect_i && c - '0' == j)) {
                    length++;
                    expect_i = !expect_i;  
                }
            }
            // make it even if not
            if (length % 2 == 0) {
                max_pair = max(max_pair, length);
            }
            else max_pair = max(max_pair, length - 1);
        }
    }

    int max_length = max(max_single, max_pair);
    cout << (s.size() - max_length) << '\n';
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