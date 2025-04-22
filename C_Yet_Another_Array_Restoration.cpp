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
        int n, x, y;
        cin >> n >> x >> y;
        int lastdiff = y - x;
        int diff = y - x;
        for (int i = y - x; i >= 1;i--) {
            if ((y - x) % i == 0) {
                diff = i;
                int lastterm = y - (n - 1) * diff;
                if (lastterm >= 1 and lastterm <= x) {

                    break;
                }
                else if (lastterm > x) {
                    diff = lastdiff;
                }
                lastdiff = diff;
            }
        }
      
        int term = y;
        int sign = -1;
        while (n--) {
            if (term > 0) {
                cout << term << " ";
                term += (sign * diff);
            }
            else {
                term = y + diff;
                sign = +1;
                n++;
            }

        }
        cout << endl;
    }
    return 0;
}