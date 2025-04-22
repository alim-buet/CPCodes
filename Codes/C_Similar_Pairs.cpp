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
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2) odd++;
        }
        if (odd % 2 == 0) yes
        else {
            int even = n - odd;
            if (even % 2) {
                sort(arr.begin(), arr.end());
                int flag = 0;
                for (int i = 1;i < n;i++) {
                    if (arr[i] - arr[i - 1] == 1) {
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