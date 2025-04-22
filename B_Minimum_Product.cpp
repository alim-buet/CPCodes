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
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        if (((a - x) + (b - y)) <= n) {
            cout << x * y << endl;
        }
        else {
            ll ans1, ans2;
            if ((a - x) > n) {
                ans1 = (a - n) * b;
            }
            else {
                ans1 = (x) * (b - (n - (a - x)));
            }
            if ((b - y) > n) {
                ans2 = (b - n) * a;
            }
            else {
                ans2 = y * (a - (n - (b - y)));
            }
            cout << min(ans1, ans2) << endl;





        }

    }
    return 0;
}