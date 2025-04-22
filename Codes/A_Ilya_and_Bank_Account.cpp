#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    if (n > 0) {
        cout << n << endl;
    }
    else {
        long long num = abs(n);
        int ekok = num % 10;
        num = num / 10;
        int doshok = num % 10;
        num = num / 10;
        if (num == 0) {
            if (ekok < doshok) {
                string op = to_string(ekok);
                if (op == "0") {
                    cout << op << endl;
                }
                else {
                    cout << "-" << op << endl;


                }
            }
            else {
                string op2 = to_string(doshok);
                if (op2 == "0") {
                    cout << op2 << endl;
                }
                else {
                    cout << "-" << op2 << endl;


                }
            }

        }
        else {
            if (ekok < doshok) {
                string op = to_string(num) + to_string(ekok);
                cout << "-" << op << endl;
            }
            else {
                string op2 = to_string(num) + to_string(doshok);
                cout << "-" << op2 << endl;
            }

        }






    }
    return 0;
}