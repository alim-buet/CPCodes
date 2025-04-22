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
        ll n, k;
        cin >> n >> k;
        if (n % 2) {
            cout << 1 << " " << (n / 2) << " " << (n / 2) << endl;
        }
        else {
            if (n % 4) {
                cout << 2 << " " << (n / 2 - 1) << " " << (n / 2 - 1) << endl;
            }
            else {
                cout << n / 4 << " " << (n / 4) << " " << (n / 2) << endl;
            }
        }

    }
    return 0;
}