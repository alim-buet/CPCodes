#include<bits/stdc++.h>
using namespace std;
int main() {
    string number;
    cin >> number;
    int len = number.length();
    int  prev = (2 * ((1 << (len - 1)) - 1));
    int ans = prev + 1;
    for (int i = 0;i < len;i++) {
        if (number[i] == '7') {
            ans += (1 << (len - i - 1));
        }

    }
    cout << ans << endl;




    return 0;
}