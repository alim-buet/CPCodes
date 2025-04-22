#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int findNextGreaterIndex(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int result = arr.size();

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > target) {
            result = mid; 
            right = mid - 1;
        }
        else {
            left = mid + 1; 
        }
    }

    return result;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0;i < n;i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    int q;
    cin >> q;
    while (q--)
    {
        long long int x;
        cin >> x;
        cout << findNextGreaterIndex(arr, x) << endl;
    }


    return 0;
}
