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
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        if (arr[0] != arr[1]) yes
        else {
            if (arr[0] == 1) no
            else {
                int flag = 0;
                for (int i = 1;i < n;i++) {
                    if (arr[i] % arr[0] != 0) {
                        flag = 1;
                        break;
                    }
                }
                if (flag) yes
                else no

            }
        }
    }
    return 0;
}