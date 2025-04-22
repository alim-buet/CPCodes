#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    unsigned int total;
    while (t--) {
        cin >> total;

        if (total == 1 || total == 2) {
            cout << 0 << endl;
        }
        else {
            if (total % 2 == 0) {
                cout << ((total / 2) - 1) << endl;
            }
            else {
                cout << (total / 2) << endl;
            }
        }
    }
    return 0;

}