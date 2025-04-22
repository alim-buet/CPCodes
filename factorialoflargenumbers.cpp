#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int multiply(int x, int res[], int res_size) {
    int carry = 0;
    for (int i = 0;i < res_size;i++) {
        int  product = res[i] * x + carry;
        res[i] = product % 10;
        carry = product / 10;

    }
    while (carry)
    {
        res[res_size] = carry % 10;
        carry /= 10;
        res_size++;
    }
    return res_size;

}
void factorial(int n) {
    int res[500];
    res[0] = 1;
    int res_size = 1;
    for (int i = 2;i <= n;i++) {
        res_size = multiply(i, res, res_size);
    }
    cout << "The factorial of " << n << " is : ";
    for (int j = res_size - 1;j >= 0;j--) {
        cout << res[j];
    }
    cout << endl;
}
int main() {
    while (true)
    {
        cout << "Enter a number to find out factorial: ";
        int n;
        cin >> n;
        factorial(n);
    }



    return 0;
}