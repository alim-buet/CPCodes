#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
vi ans(101, 0);
void findAns(vi& arr, int prev, int l, int r, vector<bool>& isvisited) {
    if (l < 0 or r >= arr.size()) return;
    if (isvisited[l] or isvisited[r]) return;

    int maxind;
    int maxNum = -1;
    for (int i = l;i <= r;i++) {
        if (arr[i] >= maxNum) {
            maxind = i;
            maxNum = arr[i];
        }
    }
    ans[maxind] = prev + 1;

    isvisited[maxind] = true;
    findAns(arr, prev + 1, l, maxind - 1, isvisited);
    findAns(arr, prev + 1, maxind + 1, r, isvisited);

}
void solve() {
    int n;cin >> n;
    vi arr(n);
    for (int i = 0;i < n;i++) cin >> arr[i];
    vector<bool> isvisited(n, false);
    //did not visit any index yet
    findAns(arr, -1, 0, n - 1, isvisited);
    for (int i = 0;i < n;i++) cout << ans[i] << " ";
    cout << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}