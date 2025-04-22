#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    for (int r = 1;r <= n;r++) {
        for (int c = 1; c <= m; c++)
        {
            if (r % 2 == 1) {
                cout << "#";
            }
            if (r % 2 == 0) {
                if (r % 4 == 0) {
                    if (c == 1) {
                        cout << "#";
                    }
                    else {
                        cout << ".";
                    }
                }
                else {
                    if (c == m) {
                        cout << "#";
                    }
                    else {
                        cout << ".";
                    }
                }

            }
        }
        cout << endl;


    }

    return 0;
}