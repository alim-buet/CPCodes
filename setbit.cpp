#include<iostream>

using namespace std;
int setbit(int n, int pos) {
    return (n | (1 << pos));

}
int clearbit(int n, int pos) {
    return (~(1 << pos)) & n;
}

int main() {
    int n;
    cin >> n;
    int i;
    cin >> i;
    cout << clearbit(n, i) << endl;

    return 0;

}