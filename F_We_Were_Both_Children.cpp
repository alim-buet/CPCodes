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
    vi arr(n);
    vi poscnt(n + 1);
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
        if (arr[i] <= n) poscnt[arr[i]]++;
    }
    vi count(n + 1, poscnt[1]);
    poscnt[1] = 0;
    count[0] = 0;
    for (int i = 0;i < n;i++) {
        if (arr[i] > n) continue;
        if (poscnt[arr[i]] == 0) continue;
        int currpos = arr[i];
        while (currpos <= n) {
            count[currpos] += poscnt[arr[i]];
            currpos += arr[i];
        }
        poscnt[arr[i]] = 0;
    }
    //n*(n/2 + n/3 + n/4 + ...)
    int maxans = -1;
    for (int i = 0;i <= n;i++) {
        maxans = max(maxans, count[i]);
    }
    cout << maxans << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}