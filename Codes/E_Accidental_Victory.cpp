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
    vector<pair<ll, ll>> NumInd;
    for (int i = 0;i < n;i++) {
        int x;cin >> x;
        NumInd.push_back(make_pair(x, i));
    }
    sort(NumInd.begin(), NumInd.end());
    int pos = 0;

    for (int i = 0;i < n - 1;i++) {
        if (i == 0) {
            if (NumInd[i].first < NumInd[i + 1].first) pos = i + 1;

        }
        else {
            if (NumInd[i].first + NumInd[i - 1].first < NumInd[i + 1].first) {
                pos = i + 1;
            }
            NumInd[i].first += NumInd[i - 1].first;
        }



    }
    vi ans;
    for (int i = pos;i < n;i++) {
        ans.push_back(NumInd[i].second);
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto el : ans) cout << el + 1 << " ";
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