#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pos;
        cin >> pos;
        char col = pos[0];
        int row = pos[1] - '0';
        for (int i = 1;i <= 8;i++) {
            if (i == row) continue;
            else cout << col << i << endl;
        }
        for (int i = 0;i < 8;i++) {
            if (i + 'a' == col) continue;
            else cout << (char)(i + 'a') << row << endl;
        }

    }
    return 0;
}