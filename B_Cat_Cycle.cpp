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
        if (n % 2) {
            int temp = k + ((int) ceil((float) k / (n / 2))) - 1;
            // cout << "temp = " << temp << endl;
            if (temp % n == 0) cout << n << endl;
            else cout << (temp % n) << endl;
        }
        else {
            if (k % n == 0) cout << n << endl;
            else cout << k % n << endl;
        }
    }
    return 0;
}