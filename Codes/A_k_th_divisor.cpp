#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
vector<long long> getFactors(long long n) {
    vector<long long> factors;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n / i) {
                factors.push_back(n / i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    return factors;
}


int main() {
    ll n, k;cin >> n >> k;
    vl factors = getFactors(n);
    if (factors.size() < k) {
        cout << -1 << endl;
    }
    else cout << factors[k - 1] << endl;

    return 0;
}