#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
unsigned long long int Catalan(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    long long int result = 0;
    for (int i = 0;i < n;i++) {
        result += Catalan(i) * Catalan(n - 1 - i);
    }
    return result;
}
int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << "The Catalan number for n = " << n << " is " << Catalan(n) << endl;

    return 0;
}