#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n + 1);  // Permutation array with 1-based indexing
    vector<bool> visited(n + 1, false);  // To keep track of visited indices

    // Read the permutation
    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
    }

    int swaps_needed = 0;

    // Find cycles in the permutation
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            int cycle_length = 0;
            int x = i;

            // Follow the cycle
            while (!visited[x]) {
                visited[x] = true;
                x = p[x];
                cycle_length++;
            }

            // If cycle length is greater than 2, we need (cycle_length - 1) swaps
            if (cycle_length > 1) {
                swaps_needed += (cycle_length - 1);
            }
        }
    }

    cout << swaps_needed << '\n';  // Output the result for the current test case
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        solve();  // Process each test case
    }
    return 0;
}
