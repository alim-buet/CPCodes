#include<bits/stdc++.h>
using namespace std;
int ispossible(int arr[], int n, int t, int h) {
    int tot = 0;
    for (int i = 0;i < n;i++) {
        tot += ceil((double) arr[i] / t);
    }
    if (tot > h) return 0;
    else {
        return 1;
    }

}
int firstoccurance(int arr[], int n, int h) {
    int l = 1, mid, ans = -1;
    int  r = *max_element(arr, arr + n);
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ispossible(arr, n, mid, h)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }

    }
    return ans;

}
int main() {
    int n, h;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> h;
    int fiOc = firstoccurance(arr, n, h);
    cout << fiOc << endl;


    return 0;
}