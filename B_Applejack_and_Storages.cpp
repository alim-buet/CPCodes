#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n";
#define no cout << "NO\n";

void solve() {
    int n;
    cin >> n;

    map<int, int> freq; // Frequency of each plank length
    int two_count = 0, four_count = 0, eight_count = 0;

    auto update_counts = [&](int length, int change) {
        int prev = freq[length];
        freq[length] += change;
        int curr = freq[length];

        // Update counts for groups of 2, 4, 8
        if (prev >= 8) eight_count--;
        if (prev >= 4) four_count--;
        if (prev >= 2) two_count--;

        if (curr >= 2) two_count++;
        if (curr >= 4) four_count++;
        if (curr >= 8) eight_count++;
        };

    for (int i = 0; i < n; i++) {
        int plank;
        cin >> plank;
        update_counts(plank, 1);
    }

    int q;
    cin >> q;

    while (q--) {
        char op;
        int x;
        cin >> op >> x;

        if (op == '+') {
            update_counts(x, 1);
        }
        else {
            update_counts(x, -1);
        }

        // Check if storages can be built
        if (eight_count >= 1 || (four_count >= 2) || (four_count >= 1 && two_count >= 2)) {
            yes
        }
        else {
            no
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
