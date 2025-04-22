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
        map<int, int> mp;
        int x;
        int max_cnt = -1;
        for (int i = 0;i < n;i++) {
            cin >> x;
            mp[x]++;
            max_cnt = max(max_cnt, mp[x]);
        }


        if (max_cnt > n / 2) cout << (max_cnt - (n - max_cnt)) << endl;
        else {
            if (n % 2) cout << 1 << endl;
            else {
                //shob pair up kora possible
                cout << 0 << endl;
            }
        }


    }
    return 0;
}