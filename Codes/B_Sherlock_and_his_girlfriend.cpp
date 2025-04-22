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
    vector<bool> isPrime(n + 2, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n + 1; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n + 1; j += i) {
                isPrime[j] = false;
            }
        }
    }
    int k;
    if (n <= 2) {
        k = 1;
    }
    else k = 2;
    cout << k << endl;
    for (int i = 2;i <= n + 1;i++) {
        if (isPrime[i]) cout << 1 << " ";
        else cout << 2 << " ";
    }
    cout << endl;



    return 0;
}