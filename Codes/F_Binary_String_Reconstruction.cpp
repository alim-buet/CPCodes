#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n0, n1, n2;
    cin >> n0 >> n1 >> n2;
    string ans;
    if (n0) {
        for (int i = 0;i < n0+1;i++) ans.push_back('0');
    }

    if (n1 % 2) {
        

    }
    cout << ans << endl;



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