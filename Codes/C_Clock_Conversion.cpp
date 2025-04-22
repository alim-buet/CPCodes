#include<bits/stdc++.h>
#include<string.h>
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
        string hour = s.substr(0, 2);
        int hr = stoi(hour);
        if (hr == 0) cout << "12:" << s[3] << s[4] << " AM" << endl;
        else if (hr == 12) cout << s << " PM" << endl;
        else if (hr > 12) {
            if (hr - 12 < 10) cout << "0" << (hr - 12) << ":" << s[3] << s[4] << " PM" << endl;
            else cout << (hr - 12) << ":" << s[3] << s[4] << " PM" << endl;
        }
        else {
            cout << s << " AM" << endl;
        }

    }
    return 0;
}