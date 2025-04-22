#include<bits/stdc++.h>
using namespace std;
int n;
int main() {

    cin >> n;
    int wormsrange[n];
    cin >> wormsrange[0];
    for (int i = 1;i < n;i++) {
        int wor;
        cin >> wor;
        wormsrange[i] = wormsrange[i - 1] + wor;
    }
    int m;
    cin >> m;
    while (m--)
    {
        int k;
        cin >> k;
        auto pos = lower_bound(wormsrange, wormsrange + n, k);
        cout << (pos - wormsrange) + 1 << endl;

    }

    return 0;
}