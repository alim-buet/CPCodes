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
        int n;
        cin >> n;
        vi alice(n), bob(n);
        for (int i = 0;i < n;i++) {
            cin >> alice[i] >> bob[i];
        }
        if (n % 2) {
            int target = alice[n / 2];
            
        }

    }
    return 0;
}