#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string direction;
        cin >> direction;
        int x = 0, y = 0;
        int flag = 0;
        for (int i = 0;i < n;i++) {
            if (direction[i] == 'U') y += 1;
            else if (direction[i] == 'R') x += 1;
            else if (direction[i] == 'D') y -= 1;
            else x -= 1;
            if (x == 1 && y == 1) {
                flag = 1;
                break;
            }
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}