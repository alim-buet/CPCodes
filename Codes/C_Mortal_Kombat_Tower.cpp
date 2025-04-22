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
    int mymove1 = (arr[0] == 1);  //2nd pos
    int mymove2 = 1000000;
    int friendmove1 = (arr[0] == 1) + (arr[1] == 1);
    int friendmove2 = (arr[0] == 1);
    for (int i = 2;i < n;i++) {
        int myans = min(friendmove1, friendmove2);
        int friendans = min((arr[i] == 1) + mymove1, (arr[i] == 1) + (arr[i - 1] == 1) + mymove2);
        mymove2 = mymove1;
        mymove1 = myans;
        friendmove2 = friendmove1;
        friendmove1 = friendans;

    }
    cout << min(mymove1, friendmove1) << endl;

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