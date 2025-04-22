#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[2*n];
        for (int i = 0; i < 2*n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 2*n);
        int x = 0, y = 0;
        for (int i = 1;i < (n);i++) {
            x += (abs(arr[i] - arr[i - 1]));
        }
        for (int i = (n)+1; i < 2*n; i++)
        {
            y += abs(arr[i] - arr[i - 1]);
        }
        int ans = x + y;
        cout << ans << endl;
        for (int i = 0; i < n ; i++)
        {
            cout << arr[i] << " " << arr[(n ) + i] << endl;
        }




    }

    return 0;
}