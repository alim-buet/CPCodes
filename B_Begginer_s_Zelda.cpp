#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin >> n;
        vi edgeCount(n + 1, 0);
        for (int i = 0;i < n - 1;i++) {
            int u, v;cin >> u >> v;
            edgeCount[u]++;
            edgeCount[v]++;
        }
        int leafCount = 0;
        for (int i = 1;i <= n;i++) {
            if (edgeCount[i] <= 1) {
                leafCount++;

            }
        }
        cout << (int) ceil(leafCount / 2.00) << endl;
    }
    return 0;
}