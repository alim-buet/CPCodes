#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int onecnt = 0;
        for (int i = 0;i < s.size();i++) onecnt += s[i] == '1';
        if (onecnt == 0) {
            cout << 1 + (s.size() - 1) / (k + 1) << endl;
        }
        else {
            int ans = 0;
            int streak = 0;
            int i = 0;
            while (s[i] == '0') {
                i++;
                streak++;
            }
            if (streak >= (k + 1)) {
                ans = 1;
                streak--;
                if (streak % (k + 1) == k) {
                    ans += (streak) / (k + 1);
                }
                else {
                    ans += (streak) / (k + 1) - 1;
                }
            }

            streak = 0;
            i++;
            for (i;i < s.size();i++) {
                if (s[i] == '1') {
                    if (streak >= k + 1) {
                        if (streak % (k + 1) == k) {
                            ans += (streak) / (k + 1);
                        }
                        else {
                            ans += (streak) / (k + 1) - 1;
                        }
                    }
                    streak = 0;
                }
                else streak++;

            }
            if (streak >= k + 1) {
                ans++;
                streak--;
                if (streak % (k + 1) == k) {
                    ans += (streak) / (k + 1);
                }
                else {
                    ans += (streak) / (k + 1) - 1;
                }
            }
            cout << ans << endl;
        }

    }
    return 0;
}