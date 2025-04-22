#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        stack<int> lowercases;
        stack<int> uppercases;
        int validchars[s.size() + 1] = { 0 };
        for (int i = 0;i < s.length();i++) {
            if (isupper(s[i]) && s[i] != 'b' && s[i] != 'B') {
                uppercases.push(i);

            }
            else if (islower(s[i]) && s[i] != 'b' && s[i] != 'B') {
                lowercases.push(i);
            }
            else {
                if (s[i] == 'B' && !uppercases.empty()) {
                    validchars[uppercases.top()] = 1;
                    uppercases.pop();

                }
                else if (s[i] == 'b' && !lowercases.empty()) {
                    validchars[lowercases.top()] = 1;
                    lowercases.pop();

                }
                validchars[i] = 1;

            }


        }
        for (int i = 0;i < s.size();i++) {
            if (validchars[i] == 0) cout << s[i];
        }
        cout << endl;


    }
    return 0;
}