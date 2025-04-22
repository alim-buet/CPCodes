#include<iostream>
using namespace std;
void printnstar(int n) {
    for (int i = 0;i < n;i++) {
        cout << "* ";
    }

}
void printnspace(int n) {
    for (int i = 0;i < n;i++) {
        cout << " ";
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = n;i >= 1;i--) {
        printnspace(i - 1);
        printnstar(n);
        cout << endl;
    }

    return 0;

}