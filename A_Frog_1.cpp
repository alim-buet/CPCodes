#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int minh[N];
int paths(int arr[], int li) {
    if (li == 0) {
        return 0;
    }
    if (li == 1) {
        return (abs(arr[1] - arr[0]));
    }
    if (minh[li] != -1) {
        return minh[li];
    }
    return minh[li] = min(abs(arr[li] - arr[li - 1]) + paths(arr, li - 1), abs(arr[li] - arr[li - 2]) + paths(arr, li - 2));
    
}
int main() {
    memset(minh, -1, sizeof(minh));
    int n;
    cin >> n;
    int li = n - 1;
    int arr[n];
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    cout << paths(arr, li) << endl;

    return 0;
}