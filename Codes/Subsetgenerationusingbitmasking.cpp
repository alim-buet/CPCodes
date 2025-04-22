#include<bits/stdc++.h>
using namespace std;
void subsetgen(int arr[], int n) {
    int flag = 1;
    for (int j = 0;j <= 31;j++) {
        if (((1 << j) & n) != 0) {
            cout << arr[j] << " ";
            flag = 0;
        }
        if (j == 31 && flag == 1) {
            cout << "Empty Set!";

        }
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0;i < (1 << n);i++) {
        subsetgen(arr, i);
    }

    return 0;
}