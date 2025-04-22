#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxans = -1;
    for (int step = 1; step <= n;step++)
    {
        for (int i = 0; (i + step) <= n; i++)
        {
            int res = step - accumulate(arr + i, arr + i + step, 0) + accumulate(arr, arr + i, 0) + accumulate(arr + i + step, arr + n, 0);
            maxans = max(maxans, res);

        }

    }
    cout << maxans << endl;


    return 0;
}