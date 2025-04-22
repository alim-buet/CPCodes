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
    for (int i = 0;i < n;i++) cin >> arr[i];
    int last1, last2;
    last1 = last2 = INT_MAX;
    int cost = 0;
    for (int i = 0;i < n;i++) {
        if (last1 > last2) {
            swap(last1, last2);
        }
        if (arr[i] <= last1) last1 = arr[i];
        else if (arr[i] <= last2) {
            last2 = arr[i];
        }
        else {
            last1 = arr[i];
            cost++;
        }
    }
    cout << cost << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}