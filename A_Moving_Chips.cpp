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
        vi arr(n);
        int f1 = -1, l1 = -1;
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
            if (f1 == -1 && arr[i])
            {
                f1 = i;
                l1 = i;
            }
            else if (arr[i]) l1 = i;

        }
        if (l1 == -1) cout << 0 << endl;
        else {
            int ans = 0;
            for (int i = f1 + 1;i <= l1;i++) {
                if (!arr[i]) ans++;
            }
            cout << ans << endl;
        }


    }
    return 0;
}