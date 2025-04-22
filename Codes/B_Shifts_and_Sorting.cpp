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
        cin >> s;
        int onecnt = 0;
        ll ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1') onecnt++;
            else {
                if (onecnt) {
                    ans += onecnt + 1;

                }
            }
        }



        cout << ans << endl;
    }
    return 0;
}