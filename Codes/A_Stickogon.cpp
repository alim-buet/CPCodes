#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        vi sticklencount(101, 0);
        int n;
        cin >> n;


        for (int i = 0;i < n;i++) {
            int x;
            cin >> x;
            sticklencount[x]++;
        }
        int ans = 0;
        for (int i = 1; i < 101;i++) {
            ans += (sticklencount[i] / 3);
        }
        cout << ans << endl;



    }
    return 0;
}