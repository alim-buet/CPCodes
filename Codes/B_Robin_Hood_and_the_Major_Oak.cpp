#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    int n, k;cin >> n >> k;
    if (n == 2) {
        if (k == 1) yes
        else no
    }
    else if (n == 1) {
        no
    }
    else {
        if (n % 2) {
            if (k % 4 == 0 or k % 4 == 3) yes
            else no
        }
        else {
            if (k % 4 == 1 or k % 4 == 0) yes
            else no
        }

    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}