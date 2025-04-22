#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int hit, va, ls;
        cin >> hit >> va >> ls;
        while (hit >= 21 && va != 0)
        {
            hit = (hit / 2) + 10;
            va--;
        }
        if (hit % 10 == 0) {
            if (hit / 10 <= ls) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else {
            if (((hit / 10) + 1) <= ls) cout << "YES" << endl;
            else cout << "NO" << endl;
        }

    }

    return 0;
}