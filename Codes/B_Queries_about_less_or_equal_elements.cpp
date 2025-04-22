#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for(int i=0;i<n;i++){cin>>arr[i]};
int main() {
    int n, m;
    cin >> n >> m;
    vi arr(n);
    for (int i = 0;i < n;i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int minel = arr[0];
    int maxel = arr[n - 1];
    int x;
    for (int i = 0;i < m;i++) {
        cin >> x;
        if (x >= maxel) cout << n << " ";
        else if (x < minel) cout << 0 << " ";
        else {
            cout << (upper_bound(arr.begin(), arr.end(), x) - arr.begin()) << " ";
        }
    }
    cout << endl;


    return 0;
}