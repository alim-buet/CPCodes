#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0;i < n;i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (find(v.begin(), v.end(), k) != v.end()) {

            cout << "YES" << endl;

        }
        else {
            cout << "NO" << endl;
        }

    }

    return 0;
}