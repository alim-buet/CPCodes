
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
        vi a(n), b(n);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
        }
        for (int i = 0;i < n;i++) {
            cin >> b[i];
        }
        int ans = 0;
        for (int i = 0;i < n;i++) {
            if (a[i] > b[i]) {
                a[n - 1] = b[i];
                sort(a.begin(), a.end());
                ans++;

            }
        }
        cout << ans << endl;
    }
    return 0;
}