#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    string num1, num2;cin >> num1 >> num2;
    ll coeff[10] = { 1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111 };
    ll first = 0;
    ll second = 0;
    for (int i = 0;i < num1.size();i++) {
        first += (num1[i] - '0') * coeff[num1.size() - i - 1];
    }
    for (int i = 0;i < num2.size();i++) {
        second += (num2[i] - '0') * coeff[num2.size() - i - 1];
    }
    cout << second - first << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}