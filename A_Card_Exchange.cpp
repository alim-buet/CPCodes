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
        vi arr(n);
        vi mp(105, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int flag = 0;
        for (int i = 0;i < 105;i++) {
            if (mp[i] >= k) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) cout << n << endl;
        else {
            cout << k - 1 << endl;
        }



    }
    return 0;
}