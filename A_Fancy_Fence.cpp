#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int th;
        cin >> th;
        if ((360 % (180 - th)) == 0) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}