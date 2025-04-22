#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int n;cin >> n;
    vector<vector<int>> times_freq(24, vector<int>(60, 0));
    for (int i = 0;i < n;i++) {
        int h, m;cin >> h >> m;
        times_freq[h][m]++;
    }
    int ans = -1;
    for (int i = 0;i < 24;i++) {
        for (int j = 0;j < 60;j++) {
            ans = max(ans, times_freq[i][j]);
        }
    }
    cout << ans << endl;

    return 0;
}