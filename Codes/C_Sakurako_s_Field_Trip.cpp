#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases
    while (t--) {
        int n;
        cin >> n;  // length of the line of students
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];  // topics of interest for each student
        }

        int maxCluster = 1, currentCluster = 1;

        // Find the length of the largest cluster of consecutive identical elements
        for (int i = 1; i < n; ++i) {
            if (a[i] == a[i - 1]) {
                currentCluster++;
            }
            else {
                maxCluster = max(maxCluster, currentCluster);
                currentCluster = 1;
            }
        }
        maxCluster = max(maxCluster, currentCluster);  // Handle the last cluster

        // Calculate the minimum disturbance
        if (maxCluster <= 2) {
            cout << 0 << endl;
        }
        else {
            cout << maxCluster - 2 << endl;
        }
    }
    return 0;
}
