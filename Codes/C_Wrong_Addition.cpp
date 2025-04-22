#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, s;
        cin >> a >> s;
        int a_indicator = a.size() - 1;
        int s_indicator = s.size() - 1;
        string b;
        int isOk = 1;
        while (1) {
            if ((a_indicator >= 0 and s_indicator < 0)) {
                isOk = 0;
                break;
            }
            if (a_indicator < 0 and s_indicator < 0) break;
            if (a_indicator < 0 or s[s_indicator] >= a[a_indicator]) {
                char ch = (a_indicator < 0) ? ('0') : a[a_indicator];

                b.push_back((char) ('0' + (s[s_indicator] - ch)));
                a_indicator--;
                s_indicator--;
            }
            else {
                if (s_indicator == 0 or s[s_indicator - 1] != '1') {
                    isOk = 0;
                    break;
                }
                else {
                    int temp = (s[s_indicator] - '0') + (s[s_indicator - 1] - '0') * 10;
                    // cout << "added char = " << (char) (temp - (a[a_indicator] - '0') + '0') << endl;

                    b.push_back((char) (temp - (a[a_indicator] - '0') + '0'));
                    a_indicator--;
                    s_indicator -= 2;
                }
            }

        }
        if (isOk) {
            reverse(b.begin(), b.end());
            int ind = 0;
            while (b[ind] == '0') ind++;
            for (int i = ind;i < b.size();i++) cout << b[i];
            cout << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}