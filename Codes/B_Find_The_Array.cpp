#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    int n;cin >> n;
    vl arr(n);
    ll evenSum = 0;
    ll oddSum = 0;
    ll sum = 0;

    for (int i = 0;i < n;i++) {
        cin >> arr[i];
        if (i % 2) {
            oddSum += arr[i] - 1;
        }
        else evenSum += arr[i] - 1;
        sum += arr[i];
    }
    if (evenSum <= (sum) / 2) {
        for (int i = 0;i < n;i++) {
            if (i % 2) cout << arr[i] << " ";
            else cout << 1 << " ";
        }
    }
    else {
        for (int i = 0;i < n;i++) {
            if (i % 2 == 0) cout << arr[i] << " ";
            else cout << 1 << " ";
        }
    }
    cout << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}