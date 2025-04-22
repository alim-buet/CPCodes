#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    int n, k;cin >> n >> k;
    vi arr(n);
    vi peaksCount(n);
    peaksCount[0] = 0;
    for (int i = 0;i < n;i++) cin >> arr[i];
    for (int i = 1;i < n - 1;i++) {
        if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1]) {
            peaksCount[i] = peaksCount[i - 1] + 1;
        }
        else peaksCount[i] = peaksCount[i - 1];
    }
    peaksCount[n - 1] = peaksCount[n - 2];
    int l = 0;
    int r = k - 1;
    int ans = -1;
    int ansL = 0;

    while (r < n) {
        int currAns = peaksCount[r] - peaksCount[l];
        if (l != 0) {
            if (arr[l] > arr[l - 1] and arr[l] > arr[l + 1]) currAns--;
        }
        if (r != n - 1) {
            if (arr[r] > arr[r + 1] and arr[r] > arr[r - 1]) currAns--;
        }


        if (currAns > ans) {
            ansL = l;
            ans = currAns;
        }
        l++;
        r++;
    }
    cout << ans + 1 << " " << ansL + 1 << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}