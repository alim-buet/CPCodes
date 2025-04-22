#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define vi vector<int>

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string c;
        cin >> c;
        string a, b;
        if (c[0] == '2') {
            a.push_back('1');
            b.push_back('1');
        }
        else if (c[0] == '1') {
            a.push_back('2');
            b.push_back('2');
        }
        else {
            a.push_back('1');
            b.push_back('2');
        }
        for (int i = 1; i < n; i++) {
            if (c[i] == '0') {
                a.push_back('1');
                b.push_back('2');
            }
            else if (c[i] == '1') {
                a.push_back('0');
                b.push_back('1');
            }
            else {
                a.push_back('0');
                b.push_back('2');
            }
        }
        cout << b << endl << a << endl;
    }
    return 0;
}