#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    string FirstName;
    string SecondName;
    string RandomWords;
    cin >> FirstName >> SecondName >> RandomWords;
    string Combined;
    Combined = FirstName + SecondName;
    if (Combined.length() != RandomWords.length()) {
        cout << "NO" << endl;
    }

    else {
        sort(RandomWords.begin(), RandomWords.end());
        sort(Combined.begin(), Combined.end());
        int flag = 1;
        for (int i = 0;i < Combined.length();i++) {
            if (Combined[i] != RandomWords[i]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }


    }








    return 0;

}