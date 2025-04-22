#include<bits/stdc++.h>
using namespace std;
int main() {
    string num;
    cin >> num;
    int len = num.length();
    for (int i = 0; i < len; i++)
    {
        if (i == 0 && num[i] == '9') {
            continue;
        }
        else if (num[i] > '4') {
            num[i] = '0' + '9' - num[i];
        }
    }
    cout << num << endl;

    return 0;
}