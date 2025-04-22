#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    ll n, curr_temp;
    cin >> n >> curr_temp;
    vector<vector<int>> arr(n, vector<int>(3));
    for (int i = 0;i < n;i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];

    }
    int flag = 1;
    int last_time = 0;
    int max_range = curr_temp;
    int min_range = curr_temp;

    for (int i = 0;i < n;i++) {
        max_range += (arr[i][0] - last_time);
        min_range -= (arr[i][0] - last_time);
        if (arr[i][2]<min_range || arr[i][1]>max_range) {
            flag = 0;
            break;
        }
        max_range = min(max_range, arr[i][2]);
        min_range = max(min_range, arr[i][1]);
        last_time = arr[i][0];
    }
    if (flag) yes
    else no
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