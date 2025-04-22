#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if ((a + b) % 2 == 0) {
            cout << "Bob" << endl;
        }
        else {
            cout << "Alice" << endl;

        }
    }

    return 0;
}