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
    vl arr(n);
    vl presum(n);
    cin >> arr[0];
    presum[0] = arr[0];
    for (int i = 1;i < n;i++) {
        cin >> arr[i];
        presum[i] = presum[i - 1] + arr[i];
    }
    vl rev_presum(n);
    rev_presum[0] = arr[n - 1];
    for (int i = 1;i < n;i++) {
        rev_presum[i] = rev_presum[i - 1] + arr[n - 1 - i];
    }

    ll totalSum = presum[n - 1];
    ll midSum = totalSum / 2 + 1;
    int midInd = lower_bound(presum.begin(), presum.end(), midSum) - presum.begin();
    int isfound = 0;
    for (int i = midInd;i >= 0;i--) {
        ll target = presum[i];
        int rev_sum_ind = (lower_bound(rev_presum.begin(), rev_presum.end(), target)) - rev_presum.begin();
        if (rev_presum[rev_sum_ind] == target) {
            if (((n - 1) - rev_sum_ind) > i) {
                isfound = 1;
                cout << target << endl;
                break;
            }
        }

    }
    if (isfound == 0) cout << 0 << endl;


    return 0;
}