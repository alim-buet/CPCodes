#include<iostream>
using namespace std;
void subarrays(int array[], int n) {
    for (int i = 0;i < (1 << n);i++) {
        for (int j = 0;j < n;j++) {
            if (i & (1 << j)) {
                cout << array[j] << " ";
            }


        }
        cout << endl;


    }
}

int main() {
    int numbers[] = { 5,3,6 };
    subarrays(numbers, 3);

    return 0;

}