#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int open = 0, close = 0;
    int paired = 0;
    for (auto c : s) {
        if (c == '(') {
            open++;
        }
        else {
            if (open) {
                open--;
                paired++;
            }

        }
    }
    cout << paired * 2 << endl;


}

int main() {

    solve();

    return 0;
}