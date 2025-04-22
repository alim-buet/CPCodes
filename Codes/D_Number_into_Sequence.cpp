#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
bool isPrime(long long n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}
void solve() {
    ll n; cin >> n;
    if (isPrime(n)) cout << 1 << endl << n << endl;
    else {
        ll maxcnt = 1;
        ll maxCntel = 1;
        for (ll i = 2;i * i <= n;i++) {
            int currCnt = 1;
            ll el = i;

            while (n % el == 0) {
                currCnt++;

                el *= i;
            }
            if (maxcnt <= currCnt) {
                maxcnt = currCnt;
                maxCntel = i;
            }

        }
        cout << maxcnt - 1 << endl;

        ll acc = 1;
        for (int i = 0;i < maxcnt - 2;i++) {
            acc *= maxCntel;
            cout << maxCntel << " ";

        }
        cout << n / acc << " " << endl;

    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}