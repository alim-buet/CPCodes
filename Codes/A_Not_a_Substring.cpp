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
        int len = s.length();
        if (s == "()") no
        else {
            string sample1, sample2;
            for (int i = 0;i < 2*len;i++) {
                if (i % 2) sample1.push_back(')');
                else sample1.push_back('(');
                // ()()()
                if (i < len) sample2.push_back('(');
                else sample2.push_back(')');
            }
            cout << "YES" << endl;
            if (sample1.find(s) == string::npos) cout << sample1<<endl;
            else cout << sample2 << endl;

        }
    }
    return 0;
}