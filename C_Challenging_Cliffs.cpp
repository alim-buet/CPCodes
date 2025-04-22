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
        sort(arr.begin(), arr.end());
        int mind = INT_MAX;
        int pivot = -1;
        for (int i = 0;i < n - 1;i++) {
            if ((arr[i + 1] - arr[i]) < mind) {
                pivot = i;
                mind = arr[i + 1] - arr[i];
            }
        }
        cout << arr[pivot] << " ";
        for (int i = pivot + 2;i < n;i++) {
            cout << arr[i] << " ";
        }
        for (int i = 0;i < pivot;i++) {
            cout << arr[i] << " ";
        }
        cout << arr[pivot + 1] << " " << endl;

    }
    return 0;
}