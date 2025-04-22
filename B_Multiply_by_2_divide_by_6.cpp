#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count2 = 0, count3 = 0;
        while (n % 2 == 0)
        {
            count2++;
            n /= 2;
        }
        while (n % 3 == 0)
        {
            count3++;
            n /= 3;
        }
        if ((count3 >= count2) && n == 1) {
            cout << (count3) +(count3 -count2) << endl;
        }
        else cout << (-1) << endl;



    }

    return 0;
}