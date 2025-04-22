#include<bits/stdc++.h>
using namespace std;
int ispossible(int arr[], int n, int buq, int perbuq, int x) {
    int count = 0, ctbq = 0;

    for (int i = 0;i < n;i++) {
        if(arr[i]<=x) count++;
        else{
            ctbq+=(count/perbuq);
            count=0;
        }
    }
    ctbq+=(count/perbuq);
    if (ctbq >= buq) {

        return 1;

    }
    else return 0;
}
int firstoccurrence(int arr[], int n, int buq, int perbuq) {
    int l = *min_element(arr, arr + n);
    int r = *max_element(arr, arr + n);
    int mid, ans = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ispossible(arr, n, buq, perbuq, mid)) {
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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];


    }
    int buq, perbuq;
    cin >> buq >> perbuq;
    if (buq * perbuq > n) cout << (-1) << endl;
    else {
        cout << firstoccurrence(arr, n, buq, perbuq) << endl;
    }

    return 0;
}