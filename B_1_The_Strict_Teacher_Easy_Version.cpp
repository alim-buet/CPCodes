#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    int n, m, q;cin >> n >> m >> q;
    vi mpos(n);
    int maxpos = -1;
    int minpos = n + 1;

    for (int i = 0;i < n;i++) cin >> mpos[i];
    sort(mpos.begin(), mpos.end());
    maxpos = mpos[n - 1];
    minpos = mpos[0];
    int spos;cin >> spos;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}