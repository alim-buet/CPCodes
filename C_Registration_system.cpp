#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    unordered_map<string, int> mp;
    while (t--) {
        string s;
        cin >> s;
        if (mp[s] > 0) {
            cout << s << mp[s]++ << endl;
        }
        else {
            
            cout << "OK" << endl;
            mp[s] = 1; 
        }
    }
    return 0;
}
