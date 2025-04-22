#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main() {
    char song[201];
    cin >> song;
    int len = strlen(song);
    int space = 0;
    for (int i = 0;i < len;i++) {
        if (song[i] == 'W' && song[i + 1] == 'U' && song[i + 2] == 'B') {
            i = i + 2;
        }s
        else {
            cout << song[i];
            if (song[i + 1] == 'W' && song[i + 2] == 'U' && song[i + 3] == 'B') {
                cout << " ";
            }
        }
    }

    return 0;

}