#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
long long nCr(long long n, long long r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;
    r = min(r, n - r);
    long long result = 1;
    for (long long i = 1; i <= r; ++i) {
        result = result * (n - i + 1) / i;
    }
    return result;
}
long long factorial(long long n) {
    long long result = 1;
    for (long long i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    ll n;cin >> n;
    ll ans;
    ans = nCr(n, n / 2) * (factorial(n / 2) / (n / 2)) * (factorial(n / 2) / (n / 2));
    ans /= 2;
    cout << ans << endl;


    return 0;
}