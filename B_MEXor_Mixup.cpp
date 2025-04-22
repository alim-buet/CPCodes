#include<bits/stdc++.h>
using namespace std;
int XOR(int n) {
    if (n % 4 == 0) {
        return n;
    }
    else if (n % 4 == 1) {
        return 1;
    }
    else if (n % 4 == 2) {
        return  n+1;
    }
    else return 0;
}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, ans;
        cin>>a>>b;
        int xo = XOR(a-1);
        if (xo == b) ans = a ;
        else if ((xo ^ b) != a) ans = a+1;
        else ans = a +2;
        cout << ans << endl;

    }


    return 0;
}