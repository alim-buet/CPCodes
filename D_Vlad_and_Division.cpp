#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--) {

        cin.tie(NULL);
        int n;
        cin >> n;
        vector<int> smaller;

        unordered_map<int, int> morethan31digit;

        int a;
        int morethan31digit_ct = 0;
        int lessthan31digit_ct = 0;
        for (int i = 0;i < n;i++) {
            cin >> a;
            if (a >= 1073741824) {
                morethan31digit_ct++;
                morethan31digit[a]++;

            }
            else {
                lessthan31digit_ct++;
                smaller.push_back(a);
            }
        }
        if (morethan31digit_ct == 0 || lessthan31digit_ct == 0) cout << n << endl;
        else {
            //jodi mixed hoy
            int ans = n; //initial guess
            for (auto el : smaller) {
                if (morethan31digit[(el ^ ((1LL << 31) - 1))]) {
                    ans--;
                    (morethan31digit[(el ^ ((1LL << 31) - 1))])--;

                }
            }
            cout << ans << endl;
        }

    }
    return 0;
}