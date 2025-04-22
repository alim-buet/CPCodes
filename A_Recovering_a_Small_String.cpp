#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 28) {
            cout << "aa" << (char) ('a' - 1 + n - 2) << endl;

        }
        else if (n > 28 && n <= 53) {
            cout << "a" << (char) ('a' - 1 + n - 27) << "z" << endl;
        }
        else {
            cout << (char) ('a' - 1 + n - 52) << "zz" << endl;
        }
    }

    return 0;
}