#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int one1, two1;
        two1 = n / 3;
        one1 = n - two1 * 2;
        int one2, two2;
        one2 = (n / 3);
        two2 = (n - one2) / 2;
        if (abs(one1 - two1) > abs(one2 - two2)) {
            cout << one2 << " " << two2 << endl;
        }
        else {
            cout << one1 << " " << two1 << endl;
        }

    }

    return 0;
}