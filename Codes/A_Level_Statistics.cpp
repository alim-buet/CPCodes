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
        int n;cin >> n;
        vi plays(n), clears(n);
        int isok = 1;
        cin >> plays[0] >> clears[0];
        if (clears[0] > plays[0]) isok = 0;
        for (int i = 1;i < n;i++) {
            cin >> plays[i];
            cin >> clears[i];
            if (clears[i] > plays[i]) isok = 0;
            if ((clears[i] - clears[i - 1]) > (plays[i] - plays[i - 1])) isok = 0;
        }
        if (is_sorted(plays.begin(), plays.end()) and is_sorted(clears.begin(), clears.end()) and isok) yes
        else no

    }
    return 0;
}