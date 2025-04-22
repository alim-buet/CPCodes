#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int colors[n][2];
    for (int i = 0;i < n;i++) {
        cin >> colors[i][0];
        cin >> colors[i][1];
    }
    int count = 0;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            if (i == j) {
                continue;
            }
            else {
                if (colors[i][0] == colors[j][1]) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;

}