#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vi zerocount(n + 5, 0), onecount(n + 5, 0);
        int onect = 0;
        for (int i = 0;i < n;i++) onect += (s[i] == '1');
        for (int i = 0;i < n;i++) {
            zerocount[i + 1] = (s[i] == '0') + zerocount[i];
            onecount[n - i] = (s[n - i] == '1') + onecount[n - i + 1];
        }
        int zeroct = n - onect;
        vi issatisfied(n + 5);
        if (onect >= ceil(n / 2.00)) issatisfied[0] = 1;
        else issatisfied[0] = 0;
        if (zeroct >= (ceil(n / 2.00))) issatisfied[n] = 1;
        else issatisfied[n] = 0;
        int ans = 10000000;
        for (int i = 1;i < n;i++) {
            if (zerocount[i] >= ceil(i / 2.00) && onecount[i] >= (ceil((n - i) / 2.00))) issatisfied[i] = 1;
            else issatisfied[i] = 0;
            if (issatisfied[i]) {
                //ans = min(abs(n / 2 - ans), abs(n / 2 - i)) == abs(n / 2 - i) ? (i) : ans;
                if (abs((n / 2) - ans) == abs(n / 2 - i)) {
                    ans = min(ans, i);
                }
                else if (abs(n / 2 - ans) > abs(n / 2 - i)) ans = i;
                //cout << "satisfaction found in i = " << i << endl;


            }
        }
        if (ans == 10000000) {
            if (issatisfied[0]) cout << 0 << endl;
            else cout << n << endl;

        }
        else cout << ans << endl;

    }
    return 0;
}