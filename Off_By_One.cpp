#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    string ans = to_string(a + b);
    ans.push_back('1');
    cout << ans << endl;
    return 0;
}