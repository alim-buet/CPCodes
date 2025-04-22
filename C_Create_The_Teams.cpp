#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    ll n, x;cin >> n >> x;
    vl arr(n);
    for (int i = 0;i < n;i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int teamCount = 0;
    int currMemberInd = n - 1;
    int memberCount = 1;

    while (1) {
        if (currMemberInd == -1) break;
        if ((arr[currMemberInd] * memberCount) >= x) {
            teamCount++;
            memberCount = 1;
            currMemberInd--;
        }
        else {
            memberCount++;
            currMemberInd--;
        }
    }
    
    
    cout << teamCount << endl;


}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}