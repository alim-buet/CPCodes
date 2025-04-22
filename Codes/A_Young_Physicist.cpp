#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int n;cin >> n;
    int x, y, z;
    int a = 0, b = 0, c = 0;
    for (int i = 0;i < n;i++) {
        cin >> x >> y >> z;
        a += x;
        b += y;
        c += z;
    }
    if (a or b or c) no
    else yes
        return 0;
}