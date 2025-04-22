#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        
        
        char ch;
        for (int i = 0;i < 64;i++) {
            cin >> ch;
            if (ch != '.') {
                cout<<ch;
            }

        }
        cout << endl;
    }

    return 0;
}