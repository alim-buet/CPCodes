#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define ll long long
#define vl vector<long long>
#define fori for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        vector<vector<int>> freq_a(n, vector<int>(26, 0));
        vector<vector<int>> freq_b(n, vector<int>(26, 0));

        for (int i = 0; i < n; i++) {
            if (i > 0) {
                for (int j = 0; j < 26; j++) {
                    freq_a[i][j] = freq_a[i - 1][j];
                    freq_b[i][j] = freq_b[i - 1][j];
                }
            }
            freq_a[i][a[i] - 'a']++;
            freq_b[i][b[i] - 'a']++;
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            l--; r--;  
            int ans = 0;
            for (int c = 0; c < 26; c++) {
                int a_cnt = freq_a[r][c] - (l > 0 ? freq_a[l - 1][c] : 0);
                int b_cnt = freq_b[r]c] - (l > 0 ? freq_b[l - 1][c] : 0);
                if (a_cnt > b_cnt) {
                    ans += (a_cnt - b_cnt);
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
