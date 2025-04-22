#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        if (d == 1) cout << 0 << endl;
        else {
            cout << ((d - 2) / 7) + 1 << endl;
        }
    }


    return 0;
}