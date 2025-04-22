#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int police = 0;
    int crime = 0;
    int events[n];
    for (int i = 0;i < n;i++) {
        cin >> events[i];
    }
    for (int i = 0;i < n;i++) {
        if (events[i] != -1) {
            police += events[i];
        }
        else if (events[i] == -1 && police > 0) {
            police--;
        }
        else if (events[i] == -1 && police == 0) {
            crime++;
        }
    }
    cout << crime << endl;
    return 0;
}