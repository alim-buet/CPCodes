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
    vl arr(n+1);
    for (int i = 1;i <= n;i++) cin >> arr[i];
    unordered_map<ll, int> mp;
    for (int i = 1;i <= n;i++) {
        mp[arr[i]] = i;
    }
    vi next(n+1, -1);
    vi prev(n+1, -1);
    for (int i = 1;i <= n;i++) {
        if (mp[arr[i] * 2]) {
            next[i] = mp[arr[i] * 2];
        }
        else if (arr[i] % 3 == 0) {
            if (mp[arr[i] / 3]) {
                next[i] = mp[arr[i] / 3];
            }
        }
        if (mp[arr[i]*3]) prev[i] = mp[arr[i] * 3];
        else if (arr[i] % 2 == 0) {
            if (mp[arr[i] / 2]) prev[i] = mp[arr[i] / 2];
        }

    }
    int firstIndex = -1;
    for (int i = 1;i <= n;i++) {
        if (prev[i] == -1) {
            firstIndex = i;
            break;
        }
    }
    int currInd = firstIndex;
    while (true) {
        cout << arr[currInd] << " ";
        if (next[currInd] == -1) break;
        currInd = next[currInd];
    }
    cout << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}