#include<iostream>
using namespace std;
int uniquenumber(int array[], int n) {
    int number = 0;
    for (int i = 0;i < n;i++) {
        number = array[i] ^ number;
    }
    return number;
}

int main() {
    int array[] = { 2,4,6,3,4,6,2 };
    cout << uniquenumber(array, 7) << endl;


    return 0;

}