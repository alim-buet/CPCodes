#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define ll long long

void solve() {
    int n; cin >> n;
    vi arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll ans = arr[0];
    for (int i = 1; i < n; i++) {
        ans ^= arr[i];
    }

    if (ans == 0) {
        //even number of equal xor partition partition
        yes
            return;
    }

    ll curr = 0;
    int segments = 0;

    for (int i = 0; i < n; i++) {
        curr ^= arr[i];

        if (curr == ans) {
            segments++;
            curr = 0;  
        }
    }

 
    if (segments >= 3) {
        yes
    }
    else {
        no
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
