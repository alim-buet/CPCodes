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
        int n, k;cin >> n >> k;
        string s;cin >> s;
        vi b_cnts(n, 0);
        b_cnts[0] = (s[0] == 'B');
        for (int i = 1;i < n;i++) {
            b_cnts[i] = b_cnts[i - 1] + (s[i] == 'B');
        }
        int totalB = b_cnts[n - 1];
        if (totalB == k) {
            cout << 0 << endl;

        }
        else if (totalB < k) {
            int b_needed = (k - totalB);
            int ind = 0;
            while (b_needed) {
                if (s[ind] == 'A') {
                    b_needed--;
                }
                ind++;
            }
            cout << 1 << endl;
            cout << ind << " " << "B" << endl;
        }
        else {
            int b_reduce = totalB - k;
            int ind = lower_bound(b_cnts.begin(), b_cnts.end(), b_reduce) - b_cnts.begin();
            cout << 1 << endl;
            cout << ind + 1 << " " << "A" << endl;
        }

    }
    return 0;
}