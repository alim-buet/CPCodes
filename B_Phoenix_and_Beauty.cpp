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
        int n, k;cin >> n >> k;
        vi arr(n);
        set<int> uniq;
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
            uniq.insert(arr[i]);
        }
        int uniqcnt = uniq.size();
        if (uniqcnt > k) cout << -1 << endl;
        else {
            if (n == k) {
                cout << n << endl;
                for (auto el : arr) cout << el << " ";
                cout << endl;
            }
            else {
                cout << n * k << endl;
                for (int i = 0;i < n;i++) {
                    for (auto el : uniq) {
                        cout << el << " ";
                    }
                    for (int i = 0;i < k - uniq.size();i++) cout << 2 << " ";

                }
                cout << endl;


            }

        }


    }
    return 0;
}