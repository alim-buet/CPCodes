#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string cards;
        cin >> cards;
        if (cards.compare("abc") == 0 || cards.compare("acb") == 0 || cards.compare("bac") == 0 || cards.compare("cba") == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}