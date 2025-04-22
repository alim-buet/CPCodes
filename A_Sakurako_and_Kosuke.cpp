#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n;cin >> n;
    int turn = 1;
    int i = 1;
    int x = 0;
    while (abs(x) <= n) {
        if (turn == 1) {
            x -= (2 * i - 1);
            i++;
            turn = 2;
        }
        else {
            x += (2 * i - 1);
            i++;
            turn = 1;
        }
    }
    if (turn == 1) cout << "Kosuke" << endl;
    else cout << "Sakurako" << endl;
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