#include<iostream>
using namespace std;
void bubblesort(int arr[], int n) {
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n - i;j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int UnsortedArray[n];
    for (int i = 0;i < n;i++) {
        cin >> UnsortedArray[i];

    }
    for (int i = 0;i < n;i++) {
        cout << UnsortedArray[i] << " ";

    }
    bubblesort(UnsortedArray, n);
    cout << endl;
    for (int i = 0;i < n;i++) {
        cout << UnsortedArray[i] << " ";


    }




    return 0;

}