#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
int no_of_two(int n) {
    int ans = 0;
    while (n % 2 == 0) {
        ans++;
        n /= 2;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vi two_cnts(n + 1);
        int total_two = 0;
        for (int i = 1;i <= n;i++) {
            int cnt = 0;
            int temp = i;
            while (temp % 2 == 0) {
                cnt++;
                temp /= 2;
            }
            two_cnts[i] = cnt;
            total_two += cnt;
        }
        sort(two_cnts.begin(), two_cnts.end(), greater<int>());
        int two_found = 0;
        for (int i = 0;i < n;i++) {
            int x;cin >> x;
            two_found += no_of_two(x);
        }
        if (two_found >= n) cout << 0 << endl;
        else {
            if ((two_found + total_two) < n) cout << -1 << endl;
            else {
                int step = 0;
                int curr_two = 0;
                for (int i = 0;i <= n;i++) {
                    curr_two += (two_cnts[i]);
                    step++;
                    if (curr_two >= (n - two_found)) break;

                }
                cout << step << endl;
            }

        }



    }
    return 0;
}