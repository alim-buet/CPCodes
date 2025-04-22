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
    ll term = 2;
    ll diff = 5;
    vl preseries;
    preseries.push_back(term);
    while (term < 10000000005) {
        term += diff;
        diff += 3;
        preseries.push_back(term);
    }
    while (t--) {
        ll n;
        cin >> n;
        if (n < 2) cout << 0 << endl;
        else {
            ll pycnt = 0;
            ll remcard = n;
            while (remcard >= 2) {
                if (binary_search(preseries.begin(), preseries.end(), remcard)) {
                    pycnt++;
                    remcard = 0;
                }
                else {
                    auto it = lower_bound(preseries.begin(), preseries.end(), remcard);
                    --it;
                    remcard -= *(it);
                    pycnt++;
                }
            }
            cout << pycnt << endl;
        }

    }
    return 0;
}