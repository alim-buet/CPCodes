#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(k);
        for (int i = 0;i < k;i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        int maxel = arr[n - 1];
        int slice = 0;
        for (int i = 0;i < k - 1;i++) {
            slice += (arr[i] - 1);
        }
        int parting = 0;
        for (int i = 0;i < k - 1;i++) {
            parting += (arr[i]);
        }
        cout << slice + parting << endl;



    }
    return 0;
}