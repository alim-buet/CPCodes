#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        //precalculating;
        vector<ll> presum(n);
        ll ans = -1;
        for (int i = n - 1;i >= 0;i--) {
            if (i + arr[i] >= n) {
                presum[i] = arr[i];

            }
            else {
                presum[i] = arr[i] + presum[i + arr[i]];

            }
            ans = max(ans, presum[i]);


        }
        cout << ans << endl;

    }
    return 0;
}