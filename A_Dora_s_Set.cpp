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
        int l, r;cin >> l >> r;
        if (l % 2 == 1) {
            //ek beshi
            int rem = (r - l) + 2;
            cout << rem / 4 << endl;

        }
        else {

            cout << (r - l + 1) / 4 << endl;

        }

    }
    return 0;
}