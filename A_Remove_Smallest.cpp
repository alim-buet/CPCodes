#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> values;
        while (n--) {
            int x;
            cin >> x;
            values.push_back(x);
        }
        sort(values.begin(), values.end());
       
        vector<int>::iterator it = values.begin();

        while (it != values.end() - 1) {
            if (*(it + 1) - *it <= 1) {
                it = values.erase(it);
            }
            else {
                ++it;
            }
        }
        if (values.size() == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
