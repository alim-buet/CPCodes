// find the number of numbers which can be devided by 5 or 7
#include<iostream>
using namespace std;
int totaldivisibles(int n, int a, int b) {
    int dba = n / a; // dba -- divisible by a
    int dbb = n / b; // dbb--divisible by b
    int dbab = n / (a * b); //dbab--divisible by a and b
    return dba + dbb - dbab; // we include both and wxclude the common term once because it's been
    // included twice. that's why it is inclusion and exclusion principle

}

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    cout << totaldivisibles(n, a, b) << endl;

    return 0;

}
