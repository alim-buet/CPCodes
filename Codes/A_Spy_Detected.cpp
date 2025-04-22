#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        int pos = 0;
        for (int i = 0;i < n - 2;i++) {
            if ((arr[i] == arr[i + 1]) && (arr[i] != arr[i + 2])) {
                pos = i + 3;
                break;
            }
            else if ((arr[i] == arr[i + 2]) && (arr[i] != arr[i + 1])) {
                pos = i + 2;
                break;
            }
            else if ((arr[i + 2] == arr[i + 1]) && (arr[i] != arr[i + 2])) {
                pos = i + 1;
                break;
            }
        }
        cout << pos << endl;
    }

    return 0;
}