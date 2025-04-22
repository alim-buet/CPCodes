#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "Yes" << endl;
#define no      cout << "No" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b, n, m;
        cin >> a >> b >> n >> m;
        if (min(a, b) < m) no
        else {
            if ((min(a, b) - m + max(a, b)) < n) no
            else yes

        }
    }
    return 0;
}