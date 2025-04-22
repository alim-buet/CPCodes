#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n == 1) cout << 0 << endl;
        else {
            long long ans = 0;
            int x = (n - 1) / 2;
            for (long long i = 0;i < x;i++) {
                ans += ((n - i*2) * 4 - 4) * (x - i);
            }
            cout << ans << endl;
        }

    }
    return 0;
}