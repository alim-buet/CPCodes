#include<bits/stdc++.h>
using namespace std;
long long m = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long ans = 1;
        while (k--)
        {
            ans = (ans * (n % m)) % m;
        }
        cout << ans << endl;

    }

    return 0;
}