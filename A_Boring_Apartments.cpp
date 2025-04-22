#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string num;
        cin >> num;
        int more;
        if (num.length() == 1) more = 1;
        else if (num.length() == 2) more = 3;
        else if (num.length() == 3) more = 6;
        else if (num.length() == 4) more = 10;
        cout << (((int) (num[0] - '1')) * 10 + more) << endl;
    }

    return 0;
}