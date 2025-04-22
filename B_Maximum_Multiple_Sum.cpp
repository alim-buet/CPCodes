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
        //x 2 to less then n
        int x;
        int ans = 2;
        int maxsum = -1;
        for (x = 2;x <= n;x++) {
            int k = (n / x);
            int sum = x * ((k + 1) * k) / 2;
            if (sum > maxsum) {
                ans = x;
                maxsum = sum;
            }

        }
        cout << ans << endl;
    }
    return 0;
}