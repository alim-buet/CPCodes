#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int pos = 0;
        if (n == 1) cout << 1 << endl;
        else if (n == 2) cout << (-1) << endl;
        else {
            for (int i = 2; i <= n * n; i += 2)
            {
                if (pos % n == 0 && pos != 0) cout << endl;
                cout << i << " ";
                pos++;

            }
            for (int i = 1;i <= n * n;i += 2) {
                if (pos % n == 0 && pos != 0) cout << endl;
                cout << i << " ";
                pos++;

            }

        }
    }

    return 0;
}