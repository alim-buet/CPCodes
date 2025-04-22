#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ll x;cin >> x;
    ll i = sqrt(x);
    if (x == 1) cout << 1 << " " << 1 << endl;
    else {
        for (i;i >= 1;i--) {
            
            if (x % i == 0 and x / i != i and gcd(i, x / i) == 1) {
                cout << i << " " << x / i << endl;
                break;
            }
        }

    }


    return 0;
}