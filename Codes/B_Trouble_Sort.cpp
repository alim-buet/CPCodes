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
        int zerocnt = 0, onecnt = 0;
        int x;
        for (int i = 0;i < n;i++) {
            cin >> x;
            if (x == 0) zerocnt++;
            else onecnt++;

        }
        if (zerocnt == 0 || onecnt == 0) {
            if (is_sorted(arr.begin(), arr.end())) yes
            else no
        }
        else {
            yes
        }

    }
    return 0;
}