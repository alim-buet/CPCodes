#include<bits/stdc++.h>
using namespace std;
int n, days;
bool ispossible(int arr[], int capacity) {
    int ct_days = 0;
    int weight = 0;
    for (int i = 0;i < n;i++) {
        if ((weight + arr[i]) > capacity) {
            ct_days++;
            weight = arr[i];
        }
        else {
            weight += arr[i];
        }
    }
    return (days >= (ct_days+1));

}
int mindays(int arr[]) {
    int l = *max_element(arr, arr + n);
    int r = accumulate(arr, arr + n, 0);
    int mid, ans = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ispossible(arr, mid)) {
            r = mid - 1;
            ans = mid;
        }
        else {
            l = mid + 1;
        }
    }
    return ans;

}
int main() {
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> days;
    cout << mindays(arr) << endl;


    return 0;
}