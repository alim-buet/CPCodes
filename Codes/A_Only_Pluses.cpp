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
        int a, b, c;
        cin >> a >> b >> c;
        int maxans = -1;
        for (int i = 0;i <= 5;i++) {
            for (int j = 0;i + j <= 5;j++) {
                maxans = max(maxans, (a + i) * (b + j) * (c + 5 - i - j));

            }
        }
        cout << maxans << endl;
    }
    return 0;
}