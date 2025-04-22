#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int dnc(vi& arr, int l, int r) {
    if (l == r) return 0;

    int mid = l + (r - l) / 2;

    int leftAns = dnc(arr, l, mid);
    int rightAns = dnc(arr, mid + 1, r);

    if (leftAns == -1 || rightAns == -1) return -1;

    if (arr[mid] - arr[mid + 1]==-1) {
        return leftAns + rightAns;
    }

    if (arr[r] - arr[l] == -1) {
        int size = mid - l + 1; 
        for (int i = 0; i < size; i++) {
            swap(arr[l + i], arr[mid + 1 + i]);
        }
        return 1 + leftAns + rightAns;
    }

    return -1;
}

void solve() {
    int n;
    cin >> n;

    vi arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int minMove = dnc(arr, 0, n - 1);
    cout << minMove << endl;
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
