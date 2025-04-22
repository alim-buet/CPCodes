#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 5];
        int gcds[n + 5];
        gcds[0] = 0;
        int q;
        cin >> q;
        int backgcds[n + 5];
        backgcds[n + 1] = 0;


        for (int i = 1;i <= n;i++) {
            cin >> arr[i];
            gcds[i] = __gcd(arr[i], gcds[i - 1]);


        }
        for (int i = n;i >= 1;--i) {
            backgcds[i] = __gcd(arr[i], backgcds[i + 1]);
        }
        while (q--) {
            int l, r;
            cin >> l >> r;
            if (gcds[l - 1] == gcds[r + 1]) {
                cout << gcds[n] << endl;
            }
            else {

                cout << __gcd(gcds[l - 1], backgcds[r + 1]) << endl;
            }

        }

    }

    return 0;
}