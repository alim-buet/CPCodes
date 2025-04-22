#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[20];
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        for (int j = 19;j >= n;j--) {
            arr[j] = 1000 + j;
        }
        // for (int i = 0;i < 20;i++) cout << arr[i] << " ";

        if (is_sorted(arr + 2, arr + 4) && is_sorted(arr + 4, arr + 8) && is_sorted(arr + 8, arr + 16) && is_sorted(arr + 16, arr + 20)) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;






    }

    return 0;
}