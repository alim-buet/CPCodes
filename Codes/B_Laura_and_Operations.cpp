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
        int a, b, c;cin >> a >> b >> c;
        if ((abs(b - c)) % 2 == 0) cout << 1 << " ";
        else cout << 0 << " ";
        if ((abs(a - c)) % 2 == 0) cout << 1 << " ";
        else cout << 0 << " ";
        if ((abs(a - b)) % 2 == 0) cout << 1 << " ";
        else cout << 0 << " ";
        cout << endl;
    }
    return 0;
}