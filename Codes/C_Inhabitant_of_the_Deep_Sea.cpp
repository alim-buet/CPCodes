#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vl arr(n), presum(n);
        cin >> arr[0];
        presum[0] = arr[0];

        for (int i = 1;i < n;i++) {
            cin >> arr[i];
            presum[i] = arr[i] + presum[i - 1];
        }

        if (k >= presum[n - 1]) cout << n << endl;
        else {
            ll halfk = (long long) ceil(k / 2.00);
            int killcount = 0;
            ll remshiplive;
            int forwardkillind = lower_bound(presum.begin(), presum.end(), halfk) - presum.begin();
            if (halfk == presum[forwardkillind]) {
                killcount = forwardkillind + 1;
                remshiplive = presum[n - 1] - halfk;

            }
            else {
                killcount = forwardkillind;
                remshiplive = presum[n - 1] - halfk;
            }
            reverse(arr.begin(), arr.end());
            vl reversepresum(n);
            reversepresum[0] = arr[0];
            for (int i = 1;i < n;i++) {
                reversepresum[i] = reversepresum[i - 1] + arr[i];
            }
            int revkillind = lower_bound(reversepresum.begin(), reversepresum.end(), k - halfk) - reversepresum.begin();
            if ((k - halfk) == reversepresum[revkillind]) killcount += revkillind + 1;
            else killcount += revkillind;
            cout << killcount << endl;



        }

    }

    return 0;
}