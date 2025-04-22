#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int proind[n], mathind[n], phyind[n];
    int pro = 1, math = 1, phy = 1;
    for (int i = 1;i <= n;i++) {
        int x;
        cin >> x;
        if (x == 1) {
            proind[pro] = i;
            pro++;
        }
        else if (x == 2) {
            mathind[math] = i;
            math++;

        }
        else {
            phyind[phy] = i;
            phy++;
        }
    }
    int mi = min(phy, min(math, pro)) - 1;
    cout << mi << endl;
    for (int i = 1;i <= mi;i++) {
        cout << proind[i] << " " << mathind[i] << " " << phyind[i] << endl;
    }



    return 0;
}