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
        vi arr(n);
        int minel = INT_MAX;
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
            minel = min(minel, arr[i]);
        }

        if (is_sorted(arr.begin(), arr.end())) yes
        else {
            vi swapables;
            for (int i = 0;i < n;i++) {
                if (arr[i] % minel == 0) {
                    swapables.push_back(arr[i]);
                }
            }
            sort(swapables.begin(), swapables.end());
            auto it = swapables.begin();
            for (int i = 0;i < n;i++) {
                if (arr[i] % minel == 0) {
                    arr[i] = *it;
                    ++it;
                }

            }
            if (is_sorted(arr.begin(), arr.end())) yes
            else no
        }
    }
    return 0;
}