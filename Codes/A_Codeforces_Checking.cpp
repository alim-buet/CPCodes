#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    string s = "codeforces";
    while (t--)
    {
        char ch;
        cin >> ch;
        if (find(s.begin(), s.end(), ch) != s.end()) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }


    return 0;
}