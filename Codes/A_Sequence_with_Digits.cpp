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
        string s;
        ll k;
        cin >> s >> k;
        ll ans = stoll(s);

        for (int i = 2;i <= k;i++) {
            ll maxdig = -1, mindig = 14;
            for (char c : s) {
                int d = c - '0';
                if (d > maxdig) maxdig = d;
                if (d < mindig) mindig = d;
            }
            if (mindig == 0) {
                break;
            }
            ans += maxdig * mindig;
            s = to_string(ans);

        }
        cout << s << endl;


    }
    return 0;
}