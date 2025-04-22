#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    int n, jump, totalSwim;cin >> n >> jump >> totalSwim;
    string s;cin >> s;
    int lastL = -1;
    vi Ldist;
    for (int i = 0;i < n;i++) {
        if (s[i] == 'L') {
            Ldist.push_back(i - lastL);
            lastL = i;
        }
    }
    Ldist.push_back(n - lastL);
    int currpos = -1;
    int Li = 0;
    if (Ldist[0] <= jump) {
        currpos = Ldist[0] - 1;

    }
    else {
        currpos = jump - 1;
    }
    Li++;
    int isFine = 1;
    int swimcnt = 0;
    for (currpos;currpos < n;currpos++) {
        if (s[currpos] == 'L') {
            if (Ldist[Li] <= jump) {
                currpos = currpos + Ldist[Li] - 1;
            }
            else {
                currpos = currpos + jump - 1;
            }
            Li++;
        }
        else {
            if (s[currpos] == 'W') swimcnt++;
            else if (s[currpos] == 'C') {
                isFine = 0;
                break;
            }
        }

    }

    //cout << "swim count = " << swimcnt << endl;
    if (isFine) {
        if (swimcnt > totalSwim) no
        else yes


    }
    else no




}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}