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
        vector<double> arr(n);
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        double sum, avg;
        int count = 0;
        if (arr[0] < k) {
            cout << 0 << endl;
        }
        else {
            sum = arr[0];
            count = 1;
            avg = sum;
            for (int i = 1;i < n;i++) {
                sum += (arr[i]);
                avg = (sum) / (count + 1);
                if (avg < k) break;
                else {
                    count++;
                }
            }
            cout << count << endl;
        }



    }
    return 0;
}