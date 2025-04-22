#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
int main() {
    string s;
    cin >> s;
    vi charcount(256, 0);
    for (auto ch : s) {
        charcount[ch]++;

    }

    int movecnt = 0;
    int oddcnt = 0;
    for (int i = 0;i < 256;i++) {
        if (charcount[i] % 2 == 0 && charcount[i] != 0) {
            movecnt++;
        }
        if (charcount[i] % 2) oddcnt++;
    }
    if (oddcnt <= 1) cout << "First" << endl;
    else {
        oddcnt += movecnt;
        int x = (movecnt % 2 == 0) ? 0 : 1;
        vector<string> player(2);
        player[0] = "First";
        player[1] = "Second";

        if (oddcnt % 2 == 0) {
            cout << player[1 - x] << endl;
        }
        else cout << player[x] << endl;
    }


    return 0;
}