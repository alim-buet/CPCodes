#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

ll dnc(vi& arr, int l, int r) {
    // cout << "INsider dnc" << endl;
    if (l == r) return 0;
    int mid = l + (r - l) / 2;
    ll leftAns = dnc(arr, l, mid);
    ll rightAns = dnc(arr, mid + 1, r);
    ll leftEvenEndingMaxGain = INT_MIN;
    ll leftOddEndingMaxGain = INT_MIN;
    ll netGain = 0;

    for (int i = mid; i >= l; i--) {
        if (i % 2 == 0) {
            netGain -= arr[i];
            leftEvenEndingMaxGain = max(netGain, leftEvenEndingMaxGain);
        }
        else {
            netGain += arr[i];
            leftOddEndingMaxGain = max(netGain, leftOddEndingMaxGain);
        }
    }

    netGain = 0;
    ll rightEvenEndingMaxGain = INT_MIN;
    ll rightOddEndingMaxGain = INT_MIN;
    for (int i = mid + 1; i <= r; i++) {
        if (i % 2 == 0) {
            netGain -= arr[i];
            rightEvenEndingMaxGain = max(rightEvenEndingMaxGain, netGain);
        }
        else {
            netGain += arr[i];
            rightOddEndingMaxGain = max(rightOddEndingMaxGain, netGain);
        }
    }

    return max({ 0LL, leftAns, rightAns,
                rightEvenEndingMaxGain + leftOddEndingMaxGain,
                rightOddEndingMaxGain + leftEvenEndingMaxGain });
}

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    ll currEvenSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i % 2 == 0) currEvenSum += arr[i];
    }
    ll difference = max(0LL, dnc(arr, 0, n - 1));
    cout << currEvenSum + difference << endl;
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
