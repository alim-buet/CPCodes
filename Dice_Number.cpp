#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int alice[3];
        int bob[3];
        for (int i = 0;i < 3;i++) {
            cin >> alice[i];
        }
        for (int i = 0;i < 3;i++) {
            cin >> bob[i];
        }
        sort(alice, alice + 3);
        sort(bob, bob + 3);
        int ali = alice[2] * 100 + alice[1] * 10 + alice[0];
        int bo = bob[2] * 100 + bob[1] * 10 + bob[0];

        if (ali > bo) {
            cout << "Alice" << endl;
        }
        else if (bo > ali) {
            cout << "Bob" << endl;
        }
        else {
            cout << "Tie" << endl;
        }



    }

    return 0;
}