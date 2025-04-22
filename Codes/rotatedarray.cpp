#include<bits/stdc++.h>
using namespace std;
int howmanyrotation(int arr[], int n) {
    int l = 0, r = n - 1, mid;
    int ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 1;
        if ((mid < r) && (arr[mid] > arr[mid + 1])) {
            ans = mid + 1;
            break;
        }
        else if ((arr[mid] < arr[mid - 1]) && (mid > l)) {
            ans = mid;
            break;
        }
        else {
            if (arr[mid] > arr[r]) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
    }
    return ans;

}
int search(int arr[], int n, int k) {
    int l = 0, r = n - 1, mid, flag = 0;
    int fi = howmanyrotation(arr, n);
    if (arr[n - 1] < k) {
        r = fi - 1;

    }
    else {
        l = fi;
    }
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (arr[mid] == k) {
            return mid;
        }
        else if (arr[mid] > k) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return -1;


}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    cout << howmanyrotation(arr, n) << endl;
    cout << "which one to search: ";
    int k;
    cin >> k;
    cout << search(arr, n, k) << endl;

    return 0;
}