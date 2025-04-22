#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
int digitCnt(ll n) {
    int ans = 0;
    while (n) {
        ans++;
        n /= 10;
    }
    return ans;
}
int digitSum(ll n) {
    int ans = 0;
    while (n) {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    for (int test = 1;test <= t;test++) {
        ll a, b, k;cin >> a >> b >> k;
        int firstd = digitCnt(a);
        int secd = digitCnt(b);
        if (k > max(firstd, secd) * 9) {
            cout << "Case " << test << ": 0" << endl;
        }
        else {
            

        }

    }
    return 0;
}