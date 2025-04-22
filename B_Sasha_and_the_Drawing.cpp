#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 4 * n - 2) cout << 2 * n << endl;
        else {
            if (k % 2) cout << k / 2 + 1 << endl;
            else cout << k / 2 << endl;
        }
    }

    return 0;
}