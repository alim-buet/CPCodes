#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int equal = 0;
        int arr[n];
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        if (n == 1) cout << 0 << endl;
        else if (arr[0] == arr[n - 1]) {
            equal = 2;
            int i, j;
            for (i = 1;i < n - 1;i++) {
                if (arr[i] == arr[0]) equal++;
                else break;

            }
            for (j = n - 2;j >= i;j--) {
                if (arr[j] == arr[0]) equal++;
                else break;
            }
            cout << n - equal << endl;

        }
        else {
            int option1 = 1, option2 = 1;
            for (int k = 1;k < n - 1;k++) {
                if (arr[k] == arr[0]) option1++;
                else break;
            }
            for (int l = n - 2;l >= 0;l--) {
                if (arr[l] == arr[n - 1]) option2++;
                else break;
            }
            cout << n - max(option1, option2) << endl;

        }




    }




    return 0;
}