#include<iostream>
#include<algorithm>
using namespace std;
void twounique(int array[], int n) {
    for (int i = 0;i < n;i++) {
        if ((array[i] ^ array[i + 1])) {
            cout << array[i] << endl;

        }
        else {
            i++;
        }
    }

}

int main() {
    int array[] = { 2,4,6,7,4,5,6,2 };
    sort(array, array + 8);
    twounique(array, 8);


    return 0;

}