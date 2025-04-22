#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    string s;
    int n = s.size();
    vi factorials(n + 1, 1);
    int mod = 1e9 + 7;
    factorials[0] = factorials[1] = 1;
    for (int i = 2;i <= n;i++) {
        factorials[i] = ((factorials[i - 1] % mod) * (i % mod)) % mod;
    }
    


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    return 0;
}