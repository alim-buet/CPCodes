#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin >> n;
        vi arr(n);
        for (int i = 0;i < n;i++) cin >> arr[i];
        bool ishappy = true;
        ll currsum = 0;
        for (int i=0;i<n;i++){
            currsum+=arr[i];
            if(currsum<=0){ ishappy=false;break;}
        }
        currsum=0;
        for(int i=n-1;i>=0;i--){
            currsum+=arr[i];
            if(currsum<=0){ishappy=false; break;}
        }
        if(ishappy) yes
        else no

    }
    return 0;
}