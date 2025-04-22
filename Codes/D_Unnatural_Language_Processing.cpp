#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string newstr;
        int i;
        for (i = 0;i < n - 3;i++) {
            if (s[i] == 'b' || s[i] == 'c' || s[i] == 'd') {
                newstr.push_back(s[i]);
                if (s[i + 3] == 'a' || s[i + 3] == 'e') {
                    newstr.push_back(s[i + 1]);
                    newstr.push_back(('.'));
                    i++;
                }
                else {
                    newstr.push_back(s[i + 1]);
                    newstr.push_back(s[i + 2]);
                    newstr.push_back('.');
                    i += 2;
                }
            }

        }
        if (i == n - 3) {
            newstr.push_back(s[i++]);
            newstr.push_back(s[i++]);
            newstr.push_back(s[i]);
        }
        else {
            newstr.push_back(s[i++]);
            newstr.push_back(s[i]);
        }

        cout << newstr << endl;


    }
    return 0;
}