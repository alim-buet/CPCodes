#include <iostream>
#include <vector>
using namespace std;
//checking how good is chatgpt 4o
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        int oddCount = 0, evenCount = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                evenCount++;
            }
            else {
                oddCount++;
            }
        }

        bool possible = false;
        // We need at least one odd number and x elements
        // Check every possible count of odd numbers from 1 to min(oddCount, x)
        for (int oddSelected = 1; oddSelected <= oddCount; oddSelected += 2) {
            int evenSelected = x - oddSelected;
            if (evenSelected >= 0 && evenSelected <= evenCount) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}
