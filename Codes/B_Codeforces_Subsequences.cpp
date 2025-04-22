#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    ll k;cin >> k;
    string s;
    string cf = "codeforces";
    vi freq(10, 1);
    ll curr = 1;
    int i = 0;
    while (curr < k) {
        freq[i]++;
        i = (i + 1) % 10;
        curr = 1;
        for (int j = 0;j < 10;j++) curr *= freq[j];

    }
    for (int i = 0;i < 10;i++) {
        for (int f = 0;f < freq[i];f++) {
            s.push_back(cf[i]);
        }
    }



    cout << s << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}