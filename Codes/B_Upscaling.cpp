#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int hash = 1;
        for (int r = 1;r <= 2 * n;r++) {
            for (int c = 1;c <= n;c++) {
                if (hash) {
                    cout << "##";
                    hash = 0;
                }
                else {
                    cout << "..";
                    hash = 1;
                }
            }
            if (r % 4 == 0 || r % 4 == 1) { hash = 1; }
            else {

                hash = 0;
            }
            cout << endl;
        }

    }
    return 0;
}