#include <bits/stdc++.h>
using namespace std;

#define yes     cout << "YES" << endl
#define no      cout << "NO" << endl
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int x = (int) sqrt((float) n);
        if (x * x != n) {
            no;
        }
        else {
            string mystr;
            for (int c = 0; c < x; c++) {
                mystr.push_back('1');
            }
            //for first row
            

            for (int r = 1; r < x - 1; r++) {
                for (int c = 0; c < x; c++) {
                    if (c == 0 or c == x - 1) {
                        mystr.push_back('1');
                    }
                    else {
                        mystr.push_back('0');
                    }
                }
            }

            for (int j = 0; j < x; j++) {
                mystr.push_back('1');
            }//last row

            if (mystr == str) {
                yes;
            }
            else {
                no;
            }
        }
    }
    return 0;
}
