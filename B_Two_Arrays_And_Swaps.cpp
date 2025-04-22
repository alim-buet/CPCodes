#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int first[n], second[n];

        for (int i = 0; i < n; i++) {
            cin >> first[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> second[i];
        }

        sort(first, first + n);
        sort(second, second + n, greater<int>());

        for (int i = 0; i < n; i++) {
            if (i < k && first[i] < second[i]) {
                first[i] = second[i];
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += first[i];
        }
        cout << ans << endl;
    }

    return 0;
}
