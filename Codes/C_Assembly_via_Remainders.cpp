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
        vl arr(n);
        for (int i = 0;i < n - 1;i++) {
            cin >> arr[i];
        }
        vl myarr(n);
        myarr[0] = arr[0] + 1;
        for (int i = 1;i < n;i++) {
            if (myarr[i - 1] + arr[i - 1] <= arr[i]) {
                myarr[i] = ((int) ceil(arr[i] / (float) myarr[i - 1])) * myarr[i - 1] + arr[i - 1];
            }
            else {
                myarr[i] = myarr[i - 1] + arr[i - 1];
            }

        }
        for (int i = 0;i < n;i++) {

            cout << myarr[i] << " ";

        }
        cout << endl;


    }
    return 0;
}