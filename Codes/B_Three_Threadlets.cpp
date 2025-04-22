#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int minimum = min(a, min(b, c));
        int maximum = max(a, max(b, c));
        int middle = a + b + c - minimum - maximum;
        if ((a == b) && (b == c)) cout << "YES" << endl;
        else if (minimum == middle) {
            if ((maximum == 2 * minimum) || (maximum == 3 * minimum) || maximum == 4 * minimum) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else if (middle == maximum) {
            if (middle % 2 == 1) cout << "NO" << endl;
            else if (minimum == maximum / 2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else {
            if ((middle % 2 == 1) || (maximum % 3 != 0)) cout << "NO" << endl;
            else if ((minimum == middle / 2) && (minimum == maximum / 3)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}