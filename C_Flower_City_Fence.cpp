#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin >> n;qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq
        int a[n];qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq
        for (int i = 0;i < n;i++) {qqqqqqqqqqqqqqqqqq
            cin >> a[i];
        }
        char hp[n][a[0]];
        for (int i = 0;i < n;i++) {
            for (int j = 0;j < a[i];j++) {
                hp[i][j] = 'a';
            }
        }
        int horiz[a[0]];

        for (int i = 0;i < a[0];i++) {
            int count = 0;
            for (int j = 0;j < a[0];j++) {
                if (hp[j][i] == 'a') {
                    count++;
                }
                horiz[i] = count;



            }
        }
        int flag = 1;
        for (int k = 0;k < a[0];k++) {
            if (horiz[k] != a[k]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }


    return 0;

}