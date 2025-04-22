#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string expression;
        cin >> expression;
        int matchedpair = 0;
        queue<char> openings;
        for (int i = 0;i < n;i++) {
            if (expression[i] == '(') {
                openings.push('(');
            }
            else {
                if (!openings.empty()) {
                    matchedpair++;
                    openings.pop();
                }
            }

        }
        cout << (n / 2) - matchedpair << endl;
    }

    return 0;
}