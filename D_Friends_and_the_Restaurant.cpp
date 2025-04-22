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
    vi x(n), y(n);
    for (int i = 0;i < n;i++) cin >> x[i];
    for (int i = 0;i < n;i++) cin >> y[i];
    vi netMoney(n);
    for (int i = 0;i < n;i++) {
        netMoney[i] = y[i] - x[i];
    }
    sort(netMoney.begin(), netMoney.end());
    int negInd = 0;
    int posInd = n - 1;
    int count = 0;
    while (netMoney[negInd] < 0 and netMoney[posInd] >= 0) {
        if (netMoney[posInd] >= -1 * netMoney[negInd]) {
            posInd--;
            negInd++;
            count++;
        }
        else {
            negInd++;
        }
    }
    int remPos = 0;
    // cout << "pos ind = " << posInd << endl;
    while (posInd >= 0 and netMoney[posInd] >= 0) {
        posInd--;
        remPos++;

    }
    // cout << "rem pos = " << remPos << endl;
    count += (remPos / 2);
    cout << count << endl;



}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}