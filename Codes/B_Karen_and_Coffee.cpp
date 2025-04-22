#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    vi brewAtT(2000005, 0);
    int maxtemp = -1;
    for (int i = 0;i < n;i++) {
        int l, r;cin >> l >> r;
        brewAtT[l]++;
        brewAtT[r + 1]--;
        maxtemp = max(maxtemp, r);
    }

    for (int i = 1;i < maxtemp + 2;i++) {
        brewAtT[i] += brewAtT[i - 1];

    }
    vi admissibleCount(2000005, 0);
    admissibleCount[0] = (brewAtT[0] >= k) ? 1 : 0;
    for (int i = 1;i < 2000005;i++) {
        admissibleCount[i] = admissibleCount[i - 1] + (brewAtT[i] >= k ? 1 : 0);
    }
    while (q--) {
        int s, e;cin >> s >> e;
        cout << admissibleCount[e] - (s > 0 ? admissibleCount[s - 1] : 0) << endl;
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}