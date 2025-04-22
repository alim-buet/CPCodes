#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

void solve(int n) {
    if (n == 1) {
        cout << "FastestFinger" << endl;
        return;
    }

    if (n == 2) {
        cout << "Ashishgup" << endl;
        return;
    }

    if (n % 2 == 1) {
        cout << "Ashishgup" << endl;
        return;
    }

    // 2^x form
    if ((n & (n - 1)) == 0) {
        cout << "FastestFinger" << endl;
        return;
    }

    // odd divi ase
    if (n % 4 != 0) {
        int p = n / 2;
        if (isPrime(p)) {
            cout << "FastestFinger" << endl;
        }
        else {
            cout << "Ashishgup" << endl;
        }
    }
    else {
        cout << "Ashishgup" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
