#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int chunk = (k - 1) / (n - 1);
        int rem = k - chunk * (n - 1);
        int ans = chunk * n + rem;
        cout << ans << endl;
    }

    return 0;
}