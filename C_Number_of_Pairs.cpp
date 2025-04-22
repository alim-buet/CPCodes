#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for(int i=0;i<n;i++){cin>>arr[i]};
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, l, r;
        cin >> n >> l >> r;
        vl arr(n);
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans += upper_bound(arr.begin(), arr.end(), r - arr[i]) - arr.begin();
            ans -= lower_bound(arr.begin(), arr.end(), l - arr[i]) - arr.begin();
            if (l <= 2 * arr[i] && 2 * arr[i] <= r) {
                ans--;
            }
        }
        cout << ans / 2 << "\n";
    }
    return 0;
}