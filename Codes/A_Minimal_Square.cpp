#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int mini = min(a, b);
        int maxi = max(a, b);
        if ((2 * mini) >= maxi) {
            cout << (2 * mini) * (2 * mini) << endl;
        }
        else {
            cout << maxi * maxi << endl;
        }
    }

    return 0;
}