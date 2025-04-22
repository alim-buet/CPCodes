#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string decoded;
        string subs;
        int d;
        for (int i = n - 1;i >= 0;i--) {
            if (s[i] != '0') {
                subs = s.substr(i, 1);
                d = stoi(subs);
                decoded.push_back((char) ('a' + d - 1));
            }
            else {
                subs = s.substr(i - 2, 2);
                d = stoi(subs);
                decoded.push_back('a' + d - 1);
                i -= 2;
            }
        }
        reverse(decoded.begin(), decoded.end());
        cout << decoded << endl;

    }
    return 0;
}