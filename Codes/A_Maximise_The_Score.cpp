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
        vi arr(2 * n);
        for (int i = 0;i < 2 * n;i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());


        long long ans = 0;
        for (int i = 0;i < 2 * n;i += 2) {
            ans += arr[i];

        }
        cout << ans << endl;
    }
    return 0;
}