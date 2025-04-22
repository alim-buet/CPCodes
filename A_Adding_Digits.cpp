#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    int isOk = 0;
    for (int i = 0;i < 10;i++) {
        if ((a * 10 + i) % b == 0) {
            a = (a * 10 + i);
            isOk = 1;
            break;
        }
    }
    if (isOk) {
        cout << a;
        for (int i = 0;i < n - 1;i++) {
            cout << 0;
        }
        cout << endl;
    }
    else {
        cout << -1 << endl;
    }
    return 0;
}