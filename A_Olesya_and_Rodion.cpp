#include<bits/stdc++.h>
using namespace std;
int main() {
    int digit, divisor;
    cin >> digit >> divisor;
    if ((digit == 1) && divisor == 10) cout << (-1) << endl;

    else if (digit == 1) cout << (divisor) << endl;
    else {
        if (divisor == 10) {
            cout << (1);
            for (int i = 2;i <= digit;i++) {
                cout << '0';


            }
        }
        else {
            char first = divisor + '0';

            cout << first;
            for (int i = 0;i < digit - 1;i++) {
                cout << '0';
            }
        }



    }


    return 0;
}