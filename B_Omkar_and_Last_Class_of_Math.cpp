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
        ll n;
        cin >> n;
        ll div = -1;
        for (int i = 2;i * i <= n;i++) {
            if (n % i == 0) {
                div = i;
                break;
            }
        }
        if (div != -1) {
            cout << (n / div) << " " << (n - (n / div)) << endl;
        }
        else {
            //n is prime
            cout << 1 << " " << (n - 1) << endl;
        }
    }
    return 0;
}
