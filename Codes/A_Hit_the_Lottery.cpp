#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int hundred = n / 100;
    n = n % 100;
    int twenty = n / 20;
    n = n % 20;
    int ten = n / 10;
    n = n % 10;
    int five = n / 5;
    n = n % 5;
    int one = n;
    cout << hundred + twenty + ten + five + one << endl;
    return 0;

}