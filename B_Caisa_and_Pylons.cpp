#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for(int i=0;i<n;i++){cin>>arr[i]};
int main() {
    int n;
    cin >> n;
    vi arr(n);
    int maxh = -1;
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
        maxh = max(maxh, arr[i]);
    }



    cout << maxh << endl;
    return 0;
}