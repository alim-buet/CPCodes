#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve_case() {
    int n;
    cin >> n;
    vector<long long> a(n);

    long long sum = 0, sum_sq = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum = (sum + a[i]) % MOD;
        sum_sq = (sum_sq + a[i] * a[i]) % MOD;
    }

    long long sum_pairs = (sum * sum - sum_sq + MOD) % MOD;
    sum_pairs = (sum_pairs * mod_exp(2, MOD - 2, MOD)) % MOD;

    long long num_pairs = (n * (n - 1) / 2) % MOD;

    long long P = sum_pairs;
    long long Q = num_pairs;
    long long Q_inv = mod_exp(Q, MOD - 2, MOD);
    long long result = (P * Q_inv) % MOD;

    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve_case();
    }
    return 0;
}
