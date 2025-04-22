#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> gangs(n + 1);
        cin >> gangs[0];
        vector<int> connectedtoOne, NotConnectedToOne;
        int secondary = -1;
        for (int i = 2;i <= n;i++) {
            int g;
            cin >> g;
            if (g == gangs[0]) {
                NotConnectedToOne.push_back(i);

            }
            else {
                connectedtoOne.push_back(i);
                secondary = i;
            }

        }
        if (secondary == -1) no
        else {
            yes
                for (auto el : connectedtoOne) {
                    cout << 1 << " " << el << endl;
                }
            for (auto el : NotConnectedToOne) {
                cout << secondary << " " << el << endl;
            }

        }

    }
    return 0;
}