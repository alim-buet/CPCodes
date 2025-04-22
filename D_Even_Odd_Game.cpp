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
        sort(arr.begin(), arr.end(), greater<int>());
        ll alice = 0, bob = 0;
        for (int i = 0;i < n;i++) {
            if (i % 2 == arr[i] % 2) {
                if (i % 2 == 0) alice += arr[i];
                else bob += arr[i];
            }
        }
        if (alice == bob) cout << "Tie" << endl;
        else if (alice > bob) cout << "Alice" << endl;
        else cout << "Bob" << endl;

    }
    return 0;
}