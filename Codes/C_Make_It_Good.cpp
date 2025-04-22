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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int i = n - 1;
        while (i > 0) {
            if (arr[i - 1] < arr[i]) {
                break;
            }
            else {
                i--;
            }
        }
        while (i > 0) {
            if (arr[i] < arr[i - 1]) {
                break;
            }
            else i--;
        }
        cout << i << endl;

    }
    return 0;
}