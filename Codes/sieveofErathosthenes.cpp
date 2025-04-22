#include<bits/stdc++.h>
using namespace std;
int main() {
    cout << "Give the range upto which the programme should genereate prime numbers: ";
    int n;
    cin >> n;
    vector<int> arr(n, 1);
    for (int i = 2;i <= n;i++) {
        if (arr[i] == 1) {
            for (int j = 2;(i * j) <= n;j++) {
                arr[i * j] = 0;
            }

        }

    }
    for (int i = 2;i <= n;i++) {
        if (arr[i] == 1) {
            cout << i << " ";
        }
    }



    return 0;
}