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

        int mult = 1;
        int x;
        int flag = 1;
        for (int i = 0;i < n;i++) {
            cin >> x;
            if (2023 % x) {
                flag = 0;
            }
            mult *= x;
        }
        if (!flag) no
        else {
            if (2023 % mult == 0) {
                yes
                    cout << 2023 / mult<<" ";
                for (int j = 1;j < k;j++) {
                    cout << "1 ";


                }
                cout << endl;
            }
            else {
                no
            }
        }



    }

    return 0;
}