#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int min_a = *min_element(a.begin(), a.end());
        int min_b = *min_element(b.begin(), b.end());

        long long moves = 0;

        for (int i = 0; i < n; i++) {
            int diff_a = a[i] - min_a;
            int diff_b = b[i] - min_b;
            moves += max(diff_a, diff_b);
        }

        cout << moves << endl;
    }

    return 0;
}
