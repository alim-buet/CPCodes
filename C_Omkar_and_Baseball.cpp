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
    vi arr(n + 1);
    int atCorrectPosition = 0;
    for (int i = 1;i <= n;i++) {
        cin >> arr[i];

    }
    int ind = n;
    while (arr[ind] == ind) {
        ind--;
    }
    // cout << "ind = " << ind << endl;
    if (ind == -1) {
        cout << 0 << endl;
    }
    else {
        int ind2 = 1;
        while (ind2 == arr[ind2]) {
            ind2++;
        }
        for (int i = ind2;i <= ind;i++) {
            if (arr[i] == i) atCorrectPosition++;
        }
        if (atCorrectPosition == 0) cout << 1 << endl;
        else cout << 2 << endl;
    }

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