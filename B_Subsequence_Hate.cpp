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
        string s;cin >> s;
        int n = s.size();
        int totalZero = 0, totalOne = 0;
        for (int i = 0;i < n;i++) {
            if (s[i] == '0') totalZero++;
            else totalOne++;
        }
        vi ZeroLeft(n), Oneleft(n);//including the ith bit
        if (s[0] == '0') ZeroLeft[0] = 1;
        else Oneleft[0] = 1;

        for (int i = 1;i < n;i++) {
            if (s[i] == '0') {
                ZeroLeft[i] = ZeroLeft[i - 1] + 1;
                Oneleft[i] = Oneleft[i - 1];

            }
            else {
                Oneleft[i] = 1 + Oneleft[i - 1];
                ZeroLeft[i] = ZeroLeft[i - 1];
            }
        }
        int ans = INT_MAX;
        for (int i = 0;i < n;i++) {
            int move_needed = 0;
            //left e 0 right e 1
            move_needed = Oneleft[i] + (totalZero - ZeroLeft[i]);
            ans = min(ans, move_needed);
            //left e 1 right e 0
            move_needed = ZeroLeft[i] + (totalOne - Oneleft[i]);
            ans = min(ans, move_needed);
        }
        cout << ans << endl;
    }
    return 0;
}