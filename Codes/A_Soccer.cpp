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
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if ((x1 < y1 && x2 < y2) || (x1 > y1 && x2 > y2)) yes
        else no



    }
    return 0;
}