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
        ll n, m;
        cin >> n >> m;
        ll minr = min(n, m);
        ll cont = 0;
        for (ll b = 1;b <= minr;b++) {
            cont += ((n + b) / (b * b) - (2 * b - 1) / (b * b));
        }
        cout << cont << endl;



    }
    return 0;
}