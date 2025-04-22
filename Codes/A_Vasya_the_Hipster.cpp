#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " ";
    int rem = max(a, b) - min(a, b);
    cout << rem / 2 << endl;
    return 0;
}