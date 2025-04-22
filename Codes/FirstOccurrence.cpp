#include<bits/stdc++.h>
using namespace std;
int FirstOccurrence(int arr[], int n, int k) {
    int l = 0, r = n - 1, mid;
    int ans = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (arr[mid] == k) {
            ans = mid;
            r = mid - 1;

        }
        else if (arr[mid] > k) {
            r = mid - 1;
        }
        else {

            l = mid + 1;
        }

    }
    return ans;

}
int LastOccurrence(int arr[], int n, int k) {
    int l = 0, r = n - 1, mid;
    int ans = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (arr[mid] == k) {
            ans = mid;
            l = mid + 1;
        }
        else if (arr[mid] > k) {
            r = mid - 1;

        }
        else {
            l = mid + 1;
        }
    }
    return ans;

}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << "First Occurrence: " << FirstOccurence(arr, n, k) << endl;
    cout << "The Last occurence: " << LastOccurence(arr, n, k) << endl;



    return 0;
}