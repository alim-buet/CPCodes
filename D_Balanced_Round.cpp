#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        if (n == 1) cout << 0 << endl;
        else {
            int maxstreak = -2;
            int currentstreak = 1;
            for (int i = 1;i < n;i++) {
                if (arr[i] - arr[i - 1] <= k) {
                    currentstreak++;
                }
                else {
                    maxstreak = max(currentstreak, maxstreak);
                    currentstreak = 1;
                    
                }

            }
            maxstreak = max(maxstreak, currentstreak);
            cout << n - maxstreak << endl;
        }
    }

    return 0;
}