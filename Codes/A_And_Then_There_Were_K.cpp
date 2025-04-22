#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int msbpos = 0;
        for (int i = 0;i <= 31;i++) {
            if (((n >> i) & 1) == 1) {
                msbpos = i;
            }
        }
        cout << (1 << msbpos) - 1 << endl;
    }

    return 0;
}