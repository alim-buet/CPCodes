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
        int n;cin >> n;
        vi arr(n);
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int removed = (n - 1) / 2;
        int ans = arr[n - 1 - removed];
        cout << ans << endl;

    }
    return 0;
}