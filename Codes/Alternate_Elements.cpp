#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0;i < n;i++) {
            cin >> num[i];
        }
        for (int j = 0;j < n;j += 2) {
            if (j + 2 >= n) {
                cout << num[j];
            }
            else {
                cout << num[j] << " ";
            }

        }
        cout << endl;
    }
    return 0;
}