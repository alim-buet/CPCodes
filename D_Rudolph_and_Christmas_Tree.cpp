#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    double n, d, h;cin >> n >> d >> h;
    double ans = 0;
    double p1, p2;
    double prev;
    cin >> prev;
    double curr;
    for (int i = 1;i < n;i++) {
        cin >> curr;
        p1 = d;
        p2 = ((curr - prev) >= h) ? 0 : (d * ((h - (curr - prev)) / h));
        double hei = ((curr - prev) >= h) ? h : (curr - prev);
        ans += ((p1 + p2) * hei) / 2.00;
        prev = curr;

    }
    ans += (.5) * (d * h);
    cout << fixed << setprecision(8) << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}