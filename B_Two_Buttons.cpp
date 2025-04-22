#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    if (n >= m) {
        cout << (n - m) << endl;
    }
    else {
        int current = m;
        int steps = 0;
        while (true)
        {
            if (current <= n) {
                break;
            }
            else if (current % 2 == 0) {
                current /= 2;
                steps += 1;

            }
            else {
                current = current / 2 + 1;
                steps += 2;

            }

        }
        steps += (n - current);
        cout << steps << endl;

    }
    return 0;
}