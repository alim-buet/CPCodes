#include <bits/stdc++.h>
using namespace std;
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


int main() {
    FAST_IO;

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << (i + 1 + i) << " ";
        }
        cout << endl;
    }

    return 0;
}
