#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        cout << y + ((n - y) / x) * x << endl;

    }

    return 0;
}