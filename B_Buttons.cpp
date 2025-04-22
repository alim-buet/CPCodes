#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long worst_case_presses = (((n * (n + 1)) / 2) - 1) * n - (((n * (n + 1) * (2 * n + 1)) / 6) - 1) + (n - 1)+n;
    cout << worst_case_presses << endl;

    return 0;
}
