#include<bits/stdc++.h>
using namespace std;
int main() {
    int y, w;
    cin >> y >> w;
    int onukul = 6 - (max(y, w)) + 1;
    if (onukul == 1) cout << ("1/6") << endl;
    else if (onukul == 2) cout << ("1/3") << endl;
    else if (onukul == 3) cout << ("1/2") << endl;
    else if (onukul == 4) cout << ("2/3") << endl;
    else if (onukul == 5) cout << ("5/6") << endl;
    else if (onukul == 6) cout << ("1/1") << endl;
    return 0;
}