//implementing binary search on an array
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "How many numbers? : ";
    cin >> n;
    int arr[n];
    cout << "The elements must be in a monotonic order: ";
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }

    int tofind;
    cout << "Which one's index you want to know? ";
    cin >> tofind;
    int lo = 0;int hi = n - 1;
    int mid;
    int isinmid = 0;
    while (hi - lo > 0)
    {
        mid = (hi + lo) / 2;
        if (arr[mid] > tofind) {
            hi = mid - 1;
        }
        else if (arr[mid] < tofind) {
            lo = mid + 1;
        }
        else {
            isinmid = 1;
            break;

        }
    }
    if (isinmid) {
        
        cout << "It is in index " << mid << endl;
    }
    else {
        if (tofind == arr[hi]) {
            cout << "It is in index " << hi << endl;
        }
        else if (tofind == arr[lo]) {

            cout << "It is in index " << lo << endl;

        }
        else {
            cout << "Sorry !! Not found.." << endl;
        }
    }


    return 0;
}