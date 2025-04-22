#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while ((t--))
    {
        int n;
        cin >> n;
        int st[n];
        for (int i = 0; i < n; i++)
        {
            cin >> st[i];
        }
        sort(st, st + n);
        int minimum = st[1] - st[0];
        for (int i = 2;i < n;i++) {
            minimum = min(minimum, st[i] - st[i - 1]);
        }
        cout << minimum << endl;

    }

    return 0;
}