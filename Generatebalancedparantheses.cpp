#include<bits/stdc++.h>
using namespace std;
vector<string> combo;
int ct = 0;
int solve(string& s, int open, int close) {

    if (open == 0 && close == 0) {
        combo.push_back(s);
        ct++;

        return 0;


    }
    if (open > 0) {
        s.push_back('(');
        solve(s, open - 1, close);
        s.pop_back();

    }
    if (close > 0) {
        if (close > open) {
            s.push_back(')');
            solve(s, open, close - 1);
            s.pop_back();
        }
    }
    return ct;
}
int main() {
    int n;
    cin >> n;
    string s = "";
    solve(s, n, n);
    cout << "Total valid combination is : " << ct << endl;
    for (auto s : combo) {
        cout << s << endl;
    }



    return 0;
}