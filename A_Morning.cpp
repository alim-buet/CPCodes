#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string num;
        cin >> num;
        int ans = 0;
        char current = '1';

        for (int i = 0;i < 4;i++) {
            char ch = num[i];`
            if (ch == '0') ch = '10';
            ans += (abs(current - ch) + 1);
            current = ch;

        }
        cout << ans << endl;
    }

    return 0;
}