#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && b < c) cout << "STAIR" << endl;
        else if (a<b && b>c) cout << "PEAK" << endl;
        else cout << "NONE" << endl;
    }
    return 0;
}