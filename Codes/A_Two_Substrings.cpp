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
    int ab_found = 0;
    int ba_found = 0;
    int aba_found = 0;
    int bab_found = 0;
    int n = s.size();
    for (int i = 0;i < s.size() - 1;i++) {
        if (i == n - 2) {
            if (s[i] == 'A' and s[i + 1] == 'B') ab_found++;
            else if (s[i] == 'B' and s[i + 1] == 'A') ba_found++;
        }
        else {
            if (s[i] == 'A' && i < n - 2) {
                if (s[i + 1] == 'B') {
                    ab_found++;
                    i++;
                    if (s[i + 1] == 'A') {
                        ab_found--;
                        aba_found++;
                        i++;
                    }
                }
            }
            else if (s[i] == 'B' && i < n - 2) {
                if (s[i + 1] == 'A') {
                    ba_found++;
                    i++;
                    if (s[i + 1] == 'B') {
                        ba_found--;
                        bab_found++;
                        i++;
                    }
                }
            }


        }


    }
    if ((ab_found && ba_found) or (aba_found > 1) or (bab_found > 1) or (aba_found and bab_found) or (aba_found and (ab_found or ba_found) or (bab_found and (ab_found or ba_found)))) {
        yes
    }
    else no



}

int main() {
    solve();
    return 0;
}