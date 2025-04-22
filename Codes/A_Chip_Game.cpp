#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, c;
        cin >> r >> c;
        if (r % 2 && c % 2) cout << "Tonya" << endl;
        else if (r % 2 || c % 2) cout << "Burenka" << endl;
        else cout << "Tonya" << endl;
    }
    return 0;
}