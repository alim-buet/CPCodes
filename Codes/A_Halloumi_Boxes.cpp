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
        int x;
        cin >> x;
        int lastone = x;
        int issorted = 1;

        for (int i = 1;i < n;i++) {
            cin >> x;
            if (lastone > x) {
                issorted = 0;
            }
            lastone = x;
        }
        if (k >= 2) yes
        else {
            if (issorted) yes
            else no
        }


    }
    return 0;
}