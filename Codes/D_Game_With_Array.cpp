#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n, s;cin >> n >> s;
    if (s >= 2 * n) {
        yes
            for (int i = 0;i < n - 1;i++) {
                cout << 2 << " ";
            }
        cout << s - (n - 1) * 2 << endl;
        cout << 1 << endl;

    }
    else no

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}