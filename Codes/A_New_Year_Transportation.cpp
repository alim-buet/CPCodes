#include <bits/stdc++.h>
using namespace std;

int main() {
    int cells, target;
    cin >> cells >> target;
    int portals[cells];

    for (int i = 1; i < cells; i++) {
        cin >> portals[i];
    }

    int current = 1; 
    bool flag = false;

    while (current < target) {
        current += portals[current];
        if (current == target) {
            flag = true;
            break;
        }
    }

    if (flag) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
