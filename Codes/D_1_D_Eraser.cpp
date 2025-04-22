#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string combo;
        cin >> combo;
        int count = 0;
        for (int i = 0;i < n;i++) {
            if (combo[i] == 'B') {
                count++;
                i += k - 1;
            }

        }
        cout << count << endl;
    }

    return 0;
}