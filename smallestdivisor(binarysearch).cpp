#include<bits/stdc++.h>
using namespace std;
int threshold;
int n;
bool ispossible(int arr[], int k) {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ceil((double) arr[i] / k);
    }
    return (sum < threshold);

}
int solve(int arr[]) {
    int l = 1;
    int r = *max_element(arr, arr + n);
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

    cin >> threshold;
    cout << solve(arr) << endl;


    return 0;
}