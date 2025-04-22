#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if ((n & (n - 1)) == 0) {
        cout << n << " can be written as 2 to the power n" << endl;
    }
    else {
        cout << n << " sorry!!!" << endl;
    }

    return 0;

}