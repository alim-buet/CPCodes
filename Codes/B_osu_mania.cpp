#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        // Calculate the number of jumps needed in each direction
        long long movesX = (x + k - 1) / k;  // Equivalent to ceil(x / k)
        long long movesY = (y + k - 1) / k;  // Equivalent to ceil(y / k)

        // The total moves is simply the sum of moves in both directions
        long long result = movesX + movesY;

        cout << result << endl;
    }

    return 0;
}
