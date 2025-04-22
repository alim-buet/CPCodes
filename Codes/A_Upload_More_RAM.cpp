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
        int n, k;
        cin >> n >> k;
        cout << k * (n - 1) + 1 << endl;
    }
    return 0;
}