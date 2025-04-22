#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons;

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        dragons.push_back({ x, y });
    }

    // Sort dragons by their strength in ascending order
    sort(dragons.begin(), dragons.end());

    // Check if Kirito can defeat all dragons
    for (const auto& dragon : dragons) {
        int x = dragon.first;
        int y = dragon.second;
        if (s > x) {
            s += y;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
