#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int combos[n];
    for (int i = 0;i < n;i++) {
        cin >> combos[i];
    }
    int flag = 0;

    for (int i = 0;i < (1 << n);i++) {
        int ans = 0;
        for (int j = 0;j < n;j++) {
            if (((1 << j) & (i)) == 0) {
                ans -= combos[j];
            }
            else {
                ans += combos[j];
            }
        }
        if (ans % 360 == 0) {
            
            flag = 1;
            break;
        }

    }
    if (flag) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}