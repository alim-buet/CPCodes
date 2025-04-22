#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;
        if (x % k) {
            cout << 1 << endl;
            cout << x << endl;
        }
        else {
            cout << 2 << endl;
            cout << x - 1 << " " << 1 << endl;

        }
    }
    return 0;
}