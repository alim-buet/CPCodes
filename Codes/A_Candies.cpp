#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int k = 2; k < 35; k++)
        {
            if ((n % ((1 << k) - 1)) == 0) {
                
                cout << (n / ((1 << k) - 1)) << endl;
                break;
            }
        }

    }

    return 0;
}