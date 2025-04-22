#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int total = 240;
    int elapsed = k;
    int solved = 0;
    for (int i = 1; elapsed <= 240;i++) {
        elapsed += i * 5;
        solved = i;
    }
    if (solved > n) {
        cout << n << endl;
    }
    else {
        cout << solved-1 << endl;
    }


    return 0;
}