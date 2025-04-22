#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> x(n), h(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> h[i];
    }

    if (n == 1) {
        cout << 1 << endl; // If there's only 1 tree, it can always be felled
        return;
    }

    int count = 2; // Fell the first tree to the left and the last to the right

    for (int i = 1; i < n - 1; i++) {
        if (x[i] - h[i] > x[i - 1]) {
            // Fell the tree to the left if it doesn't hit the previous tree
            count++;
        }
        else if (x[i] + h[i] < x[i + 1]) {
            // If it can't fall to the left, try felling it to the right
            count++;
            x[i] = x[i] + h[i]; // Update the position as if the tree fell to the right
        }
    }

    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
