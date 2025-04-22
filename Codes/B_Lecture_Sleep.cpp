#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    ll n, k;cin >> n >> k;
    vl values(n);
    vi isAwake(n);

    for (int i = 0;i < n;i++) {
        cin >> values[i];


    }
    for (int i = 0;i < n;i++) {
        cin >> isAwake[i];
    }
    ll totalSum = (isAwake[0] == 1) ? values[0] : 0;

    vl missedSum(n);
    missedSum[0] = (isAwake[0] == 0) ? values[0] : 0;
    for (int i = 1;i < n;i++) {

        if (isAwake[i] == 0) {
            missedSum[i] = missedSum[i - 1] + values[i];
        }
        else {
            missedSum[i] = missedSum[i - 1];
            totalSum += values[i];
        }
    }
    ll ans = -1;
    for (int i = 0;i < (n - k + 1);i++) {
        ll windowSum = (missedSum[i + k - 1] - missedSum[i]);
        if (isAwake[i] == 0) {
            windowSum += values[i];
        }
        ans = max(ans, windowSum + totalSum);
    }
    cout << ans << endl;
    return 0;
}
