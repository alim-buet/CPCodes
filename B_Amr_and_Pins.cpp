#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int r, a, b, c, d;
    cin >> r >> a >> b >> c >> d;
    float dist = sqrt((float) (a - c) * (a - c) + (float) (b - d) * (b - d));
    cout << (int) ceil( dist / (2 * r)) << endl;

    return 0;
}