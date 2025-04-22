#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for(int i=0;i<n;i++){cin>>arr[i]};
int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<string> s(9);

        for (int i = 0;i < 9;i++) {
            cin >> s[i];
        }
        int offset = 0;
        for (int i = 0;i < 9;i++) {

            for (int j = 0;j < 9;j++) {
                if (i == 0 && j == 0) cout << s[1][0];
                else if (i == 1 && j == 3) cout << s[2][3];
                else if (i == 2 && j == 6) cout << s[3][6];
                else if (i == 3 && j == 1) cout << s[4][1];
                else if (i == 4 && j == 4) cout << s[5][4];
                else if (i == 5 && j == 7) cout << s[i + 1][j];
                else if (i == 6 && j == 2) cout << s[i + 1][j];
                else if (i == 7 && j == 5) cout << s[i + 1][j];
                else if (i == 8 && j == 8) cout << s[0][8];
                else cout << s[i][j];


            }
            cout << endl;

        }
        cout << endl;

    }
    return 0;
}
//if something is working, don't fix it