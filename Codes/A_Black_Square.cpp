#include<bits/stdc++.h>
using namespace std;
int main() {
    int calories[5];
    for (int i = 1;i < 5;i++) {
        cin >> calories[i];
    }
    string s;
    cin >> s;
    int ans = 0;
    for (auto el : s) {
        ans += calories[(int) (el - '0')];

    }
    cout << ans << endl;
    return 0;
}