#include<iostream>
using namespace std;
void SelectionSort(int* array, int n) {
    for (int i = 0;i < n - 1;i++) {


        for (int j = i + 1;j < n;j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;


            }


        }




    }


}

int main() {
    int n;
    cin >> n;
    int elements[n];
    for (int i = 0;i < n;i++) {
        cin >> elements[i];

    }
    cout << "The actual array is : ";
    for (int i = 0;i < n;i++) {
        cout << elements[i] << " ";
    }
    cout << endl;
    SelectionSort(elements, n);
    cout << "The Sorted array is : ";
    for (int i = 0;i < n;i++) {
        cout << elements[i] << " ";
    }



    return 0;

}