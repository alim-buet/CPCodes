#include<iostream>
#include<string.h>
using namespace std;

int main() {
    char word[102];
    cin >> word;
    int len = strlen(word);
    int flag = 1;
    for (int i = 1;i < len;i++) {
        if (!isupper(word[i])) {
            flag = 0;
            break;

        }
    }
    if (flag == 1) {
        if (isupper(word[0])) {
            cout << (char) (tolower(word[0]));
        }
        else {
            cout << (char) (toupper(word[0]));
        }
        for (int j = 1;j < len;j++) {
            cout << (char) (tolower(word[j]));
        }
    }
    else {
        cout << word;
    }



    return 0;

}