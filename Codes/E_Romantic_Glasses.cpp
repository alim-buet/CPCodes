#include <bits/stdc++.h>
using namespace std;

#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll cum_sum = 0;
        map<ll, ll> freq;
        freq[0] = 1;
        // freq[i] means how many times cum_sum = i happened in the array
        bool isFound = false;
        vl arr(n);
        for (int i = 0;i < n;i++) cin >> arr[i];
        for (int i = 0; i < n; i++) {

            if (i % 2 == 0) {
                cum_sum += arr[i];
            }
            else {
                cum_sum -= arr[i];
            }

            if (freq[cum_sum]) {
                //cout << "for cumusum = " << cum_sum << " we got a match" << endl;
                isFound = true;
                break;
            }
            freq[cum_sum]++;
        }
        if (isFound) yes
        else no
    }
    return 0;
}
