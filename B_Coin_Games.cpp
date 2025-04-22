#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for(int i=0;i<n;i++){cin>>arr[i]};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int alice = 1;
        int i = 0;
        while (!s.empty()) {
            //cout << "Now string is " << s << endl;
            int isconsec = 0;
            i = 0;
            for (i = 0;i < s.size() && s.size()>2;i++) {
                if (i == 0) {
                    if (s[i] == 'U' && s[1] == 'U' && s[s.size() - 1] == 'U') {
                        isconsec = 1;
                        break;
                    }
                }
                else if (i == s.size() - 1) {
                    if (s[i] == 'U' && s[i - 1] == 'U' && s[0] == 'U') {
                        isconsec = 1;
                        break;
                    }
                }
                else {
                    if (s[i] == 'U' && s[i - 1] == 'U' && s[i + 1] == 'U') {
                        isconsec = 1;
                        break;
                    }
                }
            }
            if (isconsec) {
                //cout << "Consec found in " << i << endl;
                if (i == 0) {
                    s[1] = 'D';
                    s[s.size() - 1] = 'D';
                    s.erase(0, 1);

                }
                else if (i == s.size() - 1) {
                    s[0] = 'D';
                    s[i - 1] = 'D';
                    s.erase(i, 1);
                }
                else {
                    s[i - 1] = 'D';
                    s[i + 1] = 'D';
                    s.erase(i, 1);
                }
            }
            else {
                //cout << "Consec not fount" << endl;

                int uexist = 0;
                for (i = 0;i < s.size();i++) {
                    if (s[i] == 'U') { uexist = 1; break; }
                }
                if (uexist == 0) {
                   // cout << "No u exist" << endl;
                    break;
                }
                else {
                    //cout << "Single u exist in i = " << i << endl;
                    if (s.size() > 2) {
                        if (i == 0) {
                            if (s[s.size() - 1] == 'U') s[s.size() - 1] = 'D';
                            else s[s.size() - 1] = 'U';
                            if (s[1] == 'U') s[1] = 'D';
                            else s[1] = 'U';
                            s.erase(i, 1);
                        }
                        else if (i == s.size() - 1) {
                            if (s[i - 1] == 'U') s[i - 1] = 'D';
                            else s[i - 1] = 'U';
                            if (s[0] == 'U') s[0] = 'D';
                            else s[0] = 'U';
                            s.erase(i, 1);
                        }
                        else {
                            if (s[i - 1] == 'U') s[i - 1] = 'D';
                            else s[i - 1] = 'U';
                            if (s[i + 1] == 'U') s[i + 1] = 'D';
                            else s[i + 1] = 'U';
                            s.erase(i, 1);

                        }

                    }
                    else {
                        s.erase(i, 1);
                    }

                }
            }
            alice = 1 - alice;
            // cout << "Alice move = " << alice << endl;
        }
        if (alice) no
        else yes

    }
    return 0;
}