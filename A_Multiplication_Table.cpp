#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    long long cnt = 0;
    int square = 0;
    for (int i = 1;i * i <= x;i++) {
        if (x % i == 0 && i <= n && (x / i) <= n) {
            if (i == x/i) square = 1;
            else {
                cnt++;

            }

        }
    }
    cout << cnt * 2 + square<< endl;

    return 0;
}