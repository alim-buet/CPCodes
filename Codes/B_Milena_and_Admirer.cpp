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
        int n;cin >> n;
        vi arr(n);
        for (int i = 0;i < n;i++) cin >> arr[i];
        int curr_min = arr[n - 1];
        ll steps = 0;
        for (int i = n - 2;i >= 0;i--) {
            int curr_step = (arr[i] - 1) / curr_min;
            steps += curr_step;
            curr_min = (arr[i]) / (curr_step + 1);
        }
        cout << (steps) << endl;


    }
    return 0;
}