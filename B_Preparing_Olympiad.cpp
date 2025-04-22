#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int n;cin >> n;
    ll l, r, x;cin >> l >> r >> x;
    int permutationCount = (1 << n) - 1;
    vi arr(n);
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    ll ans = 0;
  
    for (int num = 3;num <= permutationCount;num++) {
        ll cumSum = 0;
        int elementCount = 0;
        int minNum = INT_MAX;
        int maxNum = -1;
        for (int i = 0;i < n;i++) {
            if (((1 << i) & num)) {
                cumSum += arr[i];
                elementCount++;
                minNum = min(minNum, arr[i]);
                maxNum = max(maxNum, arr[i]);

            }
        }
        if (elementCount >= 2) {
            if ((cumSum >= l and cumSum <= r) and (maxNum - minNum) >= x) {
                ans++;
            }

        }


    }
    cout << ans << endl;


    return 0;
}