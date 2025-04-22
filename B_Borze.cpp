#include<bits/stdc++.h>
using namespace std;
int main() {
    string code;
    cin >> code;
    int len = code.size();
    for (int i = 0; i < len; i++)
    {
        if (code[i] == '.')
        {
            cout << 0;
        }
        else {
            if (code[i + 1] == '-') {
                cout << 2;
            }
            else if (code[i + 1] == '.') {
                cout << 1;
            }
            i++;
        }

    }

    return 0;
}