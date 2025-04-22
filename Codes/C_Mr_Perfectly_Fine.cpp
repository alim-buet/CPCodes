#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int min1 = INT_MAX, min2 = INT_MAX, minboth = INT_MAX;
        while (n--) {
            int m;
            string skill;
            cin >> m >> skill;
            if (skill == "10") {
                min1 = min(min1, m);
            }
            else if (skill == "01") {
                min2 = min(min2, m);
            }
            else if (skill == "11") {
                minboth = min(minboth, m);
            }
        }
        if (min1 == INT_MAX || min2 == INT_MAX) {
            cout << (minboth == INT_MAX ? -1 : minboth) << endl;
        }
        else {
            cout << min(min1 + min2, minboth) << endl;
        }
    }
    return 0;
}
