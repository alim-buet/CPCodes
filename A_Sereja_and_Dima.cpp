#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    int s = 0, d = 0;
    int lo = 0, hi = n - 1;

    for (int i = 0;i < n;i++) {
        int maximum;
        if (i == n) {
            if (n % 2 == 0) {
                maximum = arr[hi];

            }
        }
        else {
            maximum = max(arr[lo], arr[hi]);
            if (arr[lo] > arr[hi]) {
                lo++;
            }
            else {
                hi--;
            }
        }
        if (i % 2 == 0) {
            s += maximum;
        }
        else {
            d += maximum;
        }
    }
    cout << s << " " << d << endl;

    return 0;
}