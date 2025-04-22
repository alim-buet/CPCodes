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
        int a, b;cin >> a >> b;
        int c = a;
        int minans = INT_MAX;
        for (int i = c;i <= b;i++) {
            minans = min(minans, (c - a) + (b - c));
        }
        cout << minans << endl;
    }
    return 0;
}