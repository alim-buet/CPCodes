#include<bits/stdc++.h>
using namespace std;
int n, k;

int main() {
    cin >> n, k;
    cin >> n >> k;
    int arr[n];

    cin >> arr[0];
    int missing = arr[0] - 1;

    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        missing += (arr[i] - arr[i - 1] - 1);
        if (missing >= k) {
            cout << (arr[i] - (missing - k + 1)) << endl;
        }


    }



    return 0;
}