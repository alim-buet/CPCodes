#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    vector<string> s;
    for (int i = 0;i < 4;i++) {
        string temp;cin >> temp;
        s.push_back(temp);
    }
    int white_cnt = 0;
    int isfound = 0;
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            white_cnt = (s[i][j] == '.') + (s[i][j + 1] == '.') + (s[i + 1][j] == '.') + (s[i + 1][j + 1] == '.');
            if (white_cnt != 2) {
                isfound = 1;
                break;
            }
        }
    }
    if (isfound) yes
    else no

        return 0;
}