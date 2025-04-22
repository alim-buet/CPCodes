#include<bits/stdc++.h>
using namespace std;

#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (n == 1) cout << 1 << endl;
        else {

            sort(arr.begin(), arr.begin() + n);

            int minnum = arr[0];
            int maxnum = arr[n - 1];
            int gcd = 0;

            for (int i = 0; i < n - 1; i++) {
                gcd = __gcd(gcd, arr[i + 1] - arr[i]);
            }

            int target = 0;

            if (find(arr.begin(), arr.end(), maxnum - gcd) != arr.end()) {
                target = maxnum + gcd;
            }
            else {
                target = maxnum - gcd;
            }

            long long step = 0;

            for (int i = 0; i < n-1; i++) {
                step += (abs(target - arr[i])) / gcd;
            }

            if (target < maxnum) cout << step +  << endl;
            else {
                cout << step << endl;
            }
        }

    }

    return 0;
}
