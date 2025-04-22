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
        int n;
        cin >> n;
        vi arr(n);
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        int minp = arr[n - 1];
        int ans = 0;
        for (int i = n - 2;i >= 0;i--) {
            if (arr[i] > minp) {
                ans++;
            }
            minp = min(minp, arr[i]);
        }
        cout << ans << endl;
    }
    return 0;
}