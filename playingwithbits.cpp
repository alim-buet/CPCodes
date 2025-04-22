#include<bits/stdc++.h>
using namespace std;
//This function count the total digit in a binary number 
int digitct(int n) {
    int digit = 0;
    int num = n;
    while (num > 0) {
        digit++;
        num /= 2;

    }
    return digit;


}
void EvenOrOdd(int n) {
    if ((n & 1) == 0) {
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }
}
bool ispowerof2(int n) {
    return (n & (n - 1));
}
//this function will be able to print the digits in binary upto 10 point,
void printbinary(int n) {
    int digit = digitct(n);

    for (int i = digit; i >= 0; i--)
    {
        if (i == digit && ((n >> i) & 1) == 0) {
            continue;
        }
        cout << ((n >> i) & 1);
    }
    cout << endl;

}
//This function count the 1 bit in a number (there is a built in function named == __builtin__popcount())
                                                                                   //__builtin_popcountll() for bigger number
int SetbitCount(int n) {
    int count = 0;
    for (int i = 31;i >= 0;i--) {
        if (((1 << i) & n) != 0) {
            count++;
        }
    }
    return count;
}
//This funciton change the case of a letter(from upper case to lower case and vice versa)
char CaseChange(char ch) {
    return (((1 << 5) ^ ch));
}


int main() {
    int n;
    cin >> n;
    if (!ispowerof2(n)) {
        cout << "Yes, it is power of 2" << endl;

    }
    else {
        cout << "NO it is not" << endl;
    }


    return 0;
}