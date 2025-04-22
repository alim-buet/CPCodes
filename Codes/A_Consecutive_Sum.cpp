#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vi arr(n + 1);
        int maxnum = -1;
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
            maxnum = max(maxnum, arr[i]);
        }
        for (int i = k + 1;i <= n;i++) {
            if (arr[i] > arr[i % k]) {
                int temp = arr[i];
                arr[i] = arr[i % k];
                arr[i % k] = temp;
            }
        }
        long long sum = 0;
        for (int i = 1;i <= k;i++) {
            sum += arr[i];
        }
        if (k == 1) cout << maxnum << endl;
        else cout << sum << endl;

    }
    return 0;
}