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
        int f = -1;
        int l = -1;
        for (int i = 0;i < n;i++) {
            if (s[i] == 'B' && f == -1) f = i;
            else if (s[i] == 'B') l = i;


        }
        if (l == -1) cout << 1 << endl;
        else cout << l - f+1 << endl;
    }
    return 0;
}