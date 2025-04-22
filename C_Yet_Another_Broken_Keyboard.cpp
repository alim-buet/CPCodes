#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    char availablekey[300] = { 0 };
    char key;
    for (int i = 0;i < k;i++) {
        cin >> key;
        availablekey[key] = 1;
    }
    ll ans = 0;
    ll consec = 0;
    for (int i = 0;i < n;i++) {
        if (availablekey[s[i]] == 0) {
            ans += ((consec) * (consec + 1) / 2);
            consec = 0;
        }
        else {
            consec++;
        }
    }
    ans += ((consec) * (consec + 1) / 2);
    cout << ans << endl;

    return 0;
}