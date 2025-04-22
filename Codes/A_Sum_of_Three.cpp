#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;
        int first = 0, sec = 0, third = 0;
        int flag = 0;
        for (int f = 1;f < n && f % 3 != 0;f++) {


            if (((n - f) / 2) % 3 != 0 && ((n - f) - (n - f) / 2) % 3 != 0) {
                first = f;
                sec = (n - f) / 2;
                third = (n - f) - (n - f) / 2;
                if (first != sec && sec != third) {
                    flag = 1;
                    break;
                }
            }

        }
        if (flag) {
            cout << "YES" << endl;
            cout << first << " " << sec << " " << third << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }




    return 0;
}