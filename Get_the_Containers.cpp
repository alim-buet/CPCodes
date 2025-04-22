#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
int reqcont(vector<ll>& vescap, int contvol) {
    int count = 1;
    int len = vescap.size();
    int currvol = 0;
    for (int i = 0;i < len;i++) {
        currvol += vescap[i];
        if (currvol > contvol) {
            count++;
            currvol = 0;
            i--;
        }
    }
    return count;
}
int main() {
    int t;
    cin >> t;
    for (int test = 1;test <= t;test++) {
        int vesn, contn;
        cin >> vesn >> contn;
        vector<ll> vescap(vesn);
        long long lo = -3;
        long long hi = 0;
        for (int i = 0;i < vesn;i++) {
            cin >> vescap[i];
            lo = max(lo, vescap[i]);
            hi += vescap[i];
        }
        int mid;
        int ans;

        while (lo < hi) {

            mid = lo + (hi - lo) / 2;
            // cout << "Now mid = " << mid << " req container =  " << reqcont(vescap, mid) << endl;

            if (reqcont(vescap, mid) > contn) {
                lo = mid + 1;

            }
            else {
                ans = mid;
                hi = mid;
            }
        }
        cout << "Case " << test << ": " << ans << endl;


    }
    return 0;
}