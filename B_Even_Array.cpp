#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int even = 0, odd = 0;

        for (int i = 0;i < n;i++) {
            cin >> arr[i];
            if ((i % 2) != (arr[i] % 2)) {
                if (i % 2 == 0) {
                    even++;
                }
                else {
                    odd++;
                }
            }
        }
        if (even == odd) {
            cout << even << endl;
        }
        else {
            cout << (-1) << endl;
        }

    }

    return 0;
}