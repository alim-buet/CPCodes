#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int l, vt, vh;
        cin >> l >> vt >> vh;
        int tortime, haretime;
        tortime = ceil(((float) l) / ((float) vt));
        haretime = ceil(((float) l) / ((float) vh));
        int wait = tortime - haretime - 1;
        if (wait < 0) {
            cout << -1 << endl;

        }
        else {
            cout << wait << endl;
        }
    }

    return 0;
}