#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int qct = 0;
        for (int i = 0;i < s.size();i++) {
            if (s[i] == '?') qct++;
        }
        if (qct == 0) cout << s << endl;
        else {
            s[s.size()] = '1';
            for (int i = s.size() - 1;i >= 0;i--) {
                if (s[i] == '?') {
                    if (s[i + 1] == '1') s[i] = '1';
                    else s[i] = '0';
                }
            }
            cout << s << endl;
        }

    }
    return 0;
}