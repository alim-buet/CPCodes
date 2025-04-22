#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int n;
    cin >> n;
    string num;
    cin >> num;
    vector<char> ans;
    for (auto ch : num) {
        if (ch == '0' or ch == '1') continue;
        else {
            if (ch == '4') {
                ans.push_back('2');
                ans.push_back('2');
                ans.push_back('3');
            }
            else if (ch == '6') {
                ans.push_back('5');
                ans.push_back('3');
            }
            else if (ch == '8') {
                ans.push_back('7');
                ans.push_back('2');
                ans.push_back('2');
                ans.push_back('2');
            }
            else if (ch == '9') {
                ans.push_back('7');
                ans.push_back('2');
                ans.push_back('3');
                ans.push_back('3');
            }
            else {
                ans.push_back(ch);
            }
        }
    }
    sort(ans.begin(), ans.end(), greater<int>());
    for (auto ch : ans) cout << ch;
    cout << endl;

    return 0;
}