#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int a, b, c;
        cin >> a >> b >> c;
        if (((b % 3) + c) < 3 && (b % 3 != 0)) cout << (-1) << endl;
        else {
            if ((b + c) % 3 == 0) cout << a + (b + c) / 3 << endl;
            else {
                cout << a + (b + c) / 3 + 1 << endl;
            }
        }
    }
    return 0;
}