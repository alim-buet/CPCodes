#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {

    ll mod = 1000000007;
    ll f1, f2, n;
    cin >> f1 >> f2 >> n;
    int sign;
    int x = (n % 6);
    if (x >= 1 && x <= 3) sign = 1;
    else sign = -1;
    ll ans;
    if (n % 3 == 0) {


        ans = ((f2 % mod) - (f1 % mod)) % mod;
        ans *= sign;
        if (ans < 0) ans += mod;


    }
    else if (n % 3 == 1) {
        ans = f1;
        ans *= sign;
        if (ans < 0) ans += mod;

    }
    else {
        ans = f2;
        ans *= sign;
        if (ans < 0) ans += mod;
    }
    cout << ans << endl;



    return 0;
}