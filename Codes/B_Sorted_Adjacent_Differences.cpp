
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
        ll n;
        cin >> n;
        vl arr(n);
        for (ll i = 0;i < n;i++) {
            cin >> arr[i];
        }
        //observation : sort korar por 1st and last er diff max... er cheye kom 2nd and 2nd last .. and so on and so forth
        sort(arr.begin(), arr.end());
        vl ans(n);

        if (n % 2 == 0) {
            int ansid = n - 1;
            int arrind = 0;

            while (1) {
                if (ansid == -1) break;
                ans[ansid--] = arr[arrind];
                ans[ansid--] = arr[n - arrind - 1];
                arrind++;
            }
        }
        else {
            int ansind = n - 1;
            for (int i = 0;i < n / 2;i++) {
                ans[ansind--] = arr[i];
                ans[ansind--] = arr[n - i - 1];

            }
            ans[0] = arr[n / 2];

        }
        for (int i = 0;i < n;i++) cout << ans[i] << " ";
        cout << endl;

    }
    return 0;
}