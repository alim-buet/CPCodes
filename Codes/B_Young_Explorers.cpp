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
        int n;
        cin >> n;
        vi e(n);
        for (int i = 0;i < n;i++) cin >> e[i];
        sort(e.begin(), e.end());
        int lastenc = -1, cnt = 0;
        for (int i = 0;i < n;i++) {
            if (i - lastenc >= e[i]) {
                cnt++;
                lastenc = i;
            }
        }
        cout << cnt << endl;



    }
    return 0;
}