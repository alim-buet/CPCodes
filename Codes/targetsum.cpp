#include<iostream>
#include<algorithm>
using namespace std;
int memo[100] = {};
int sum(int n) {
    if (n == 0) return 1;
    if (memo[n] != 0) return memo[n];
    memo[n] = sum(n - 1) + sum(n - 1);
    return memo[n];
}
int main() {
    int n = sum(5);

    for (int i = 0; i < 100;i++)memo[i] = -1;

    cout << n << endl;
    return 0;
}