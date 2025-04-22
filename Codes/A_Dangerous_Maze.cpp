#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {

}

int main() {
    int t;
    cin >> t;
    for (int test = 1;test <= t;test++) {
        getchar();
        int n;cin >> n;
        vi nums(n);
        ll sum = 0;
        ll pos_cnt = 0;
        for (int i = 0;i < n;i++) {
            int x;
            cin >> x;
            if (x > 0) pos_cnt++;
            sum += abs(x);
        }
        if (pos_cnt == 0) {
            cout << "Case " << test << ": inf" << endl;
        }
        else {
            ll gc = __gcd(sum, pos_cnt);
            sum /= gc;
            pos_cnt /= gc;
            cout << "Case " << test << ": " << sum << "/" << pos_cnt << endl;
        }
    }
    return 0;
}