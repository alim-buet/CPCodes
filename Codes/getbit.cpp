#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Input the number in binary: ";
    cin >> n;
    cout << "Enter the position from right(0) to left(++) : ";
    int i;
    cin >> i;
    cout << "The bit in " << i << "th position from the right is " << (((1 << i) & n) != 0)<< endl;

    return 0;

}