#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        string digits, key;
        cin >> digits >> key;
        int moves[m] = {};

        for (int i = 0;i <= m - n;i++) {
            int count = 0;
            for (int j = i;j < (i + n);j++) {
                cout << min(abs(digits[j] - key[j]), (10 - abs(digits[j] - key[j]))) << endl;;

            }
            // cout << count << endl;
            moves[i] = count;
        }
        sort(moves, moves + m - n + 1);
        cout << moves[0] << endl;

    }

    return 0;
}