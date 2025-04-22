#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int scores[n];
    int count = 0;
    cin >> scores[0];
    int minimum = scores[0];
    int maximum = scores[0];
    for (int i = 1;i < n;i++) {
        cin >> scores[i];

        if (scores[i] < minimum) {
            minimum = scores[i];
            count++;
        }
        else if (scores[i] > maximum) {
            maximum = scores[i];
            count++;
        }
    }
    cout << count << endl;


    return 0;
}