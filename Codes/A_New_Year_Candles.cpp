#include<bits/stdc++.h>
using namespace std;
int main() {
    int chock, minwrap;
    cin >> chock >> minwrap;
    int ans = chock;
    int wrapper = chock;
    while (wrapper >= minwrap)
    {
        ans += (wrapper / minwrap);
        wrapper = wrapper - (wrapper / minwrap) * minwrap + (wrapper / minwrap);

    }
    cout << ans << endl;

    return 0;
}