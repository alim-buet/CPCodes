#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    int n;
    cin >> n;
    vl arr(n);
    for (int i = 0;i < n;i++) cin >> arr[i];
    if (n == 2) {
        cout << 2 << endl;
        cout << arr[0] << " " << arr[1] << endl;

    }
    else {
        ll lastcont = arr[1] - arr[0];
        int count = 2;
        vi validInd;
        validInd.push_back(0);

        for (int i = 2;i < n;i++) {
            if (lastcont * (arr[i] - arr[i - 1]) < 0) {
                validInd.push_back(i - 1);
                lastcont = (arr[i] - arr[i - 1]);
                count++;
            }
        }
        cout << count << endl;
        validInd.push_back(n - 1);
        for (auto i : validInd) {
            cout << arr[i] << " ";
        }
        cout << endl;



    }




}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}