#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

long long binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    else {
        long long result = 1;
        for (int i = 1; i <= k; ++i) {
            result *= (n - i + 1);
            result /= i;
        }
        return result;
    }
}


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        for (int i = 0;i <= n;i++) {
            for (int j = 0;j <= i;j++) {
                if (j == i) {
                    cout << binomialCoefficient(i, j);


                }
                else {
                    cout << binomialCoefficient(i, j) << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}