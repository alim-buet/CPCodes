#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    vl presum(100000);
    ll sum = 1;
    presum[0] = 1;
    for (int i = 1;i < 100000;i++) {
        sum += (i + 1);
        presum[i] = sum;
    }

    while (t--) {
        ll n, k;cin >> n >> k;
        if (k == 1) {
            for (int i = 0;i < n - 2;i++) cout << 'a';
            cout << "bb" << endl;
            continue;;
        }
        int uppInd = lower_bound(presum.begin(), presum.end(), k) - presum.begin();
        int aCount = uppInd;
        int pos = k - presum[uppInd - 1];
        for (int i = 0;i < (n - aCount - 2);i++) {
            cout << 'a';
        }
        cout << 'b';
        for (int i = 0;i < (aCount + 1 - pos);i++) cout << 'a';
        cout << 'b';
        for (int i = 0;i < pos - 1;i++) cout << 'a';
        cout << endl;


    }
    return 0;
}