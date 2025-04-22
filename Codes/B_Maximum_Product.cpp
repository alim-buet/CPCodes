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
        int n;
        cin >> n;
        vl arr(n);
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        ll option1 = arr[n - 1] * arr[n - 2] * arr[n - 3] * arr[n - 4] * arr[n - 5];
        ll option2 = arr[n - 1] * arr[n - 2] * arr[n - 3] * arr[0] * arr[1];
        ll option3 = arr[n - 1] * arr[0] * arr[1] * arr[2] * arr[3];
        cout << max(option1, max(option2, option3)) << endl;


    }
    return 0;
}