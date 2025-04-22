#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int result = 0;
        string current = x;

        while (current.size() < s.size()) {
            current += x;
            result++;
        }

        if (current == s) {
            cout << result << endl;
            continue;
        }

        int steps = s.size() / current.size();
        int remainder = s.size() % current.size();
        result = result * steps;

        current += x;
        result++;

        while (current.size() <= s.size()) {
            if (current == s.substr(0, current.size())) {
                cout << result << endl;
                break;
            }
            current += x;
            result++;
        }

        if (current.size() > s.size()) {
            cout << -1 << endl;
        }
    }

    return 0;
}
