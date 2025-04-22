#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        vector<long long> b(n + 1, 0);
        b[1] = a[1];
        for (int i = 2; i <= n; i++) {
            b[i] = a[i] + b[i - 1];
        }
        //prefix sum
        //number of section in a consecutive lanes should be less than of equal to u.. er poreo porer ta check kora lagbe
        int q;
        cin >> q;
        while (q--) {
            int l, u;
            cin >> l >> u;
            int l1 = l, r1 = n;
            while (l1 < r1) {
                int mid = l1 + r1 + 1 >> 1;
                ll k = b[mid] - b[l - 1];
                if (k <= u) l1 = mid;
                else r1 = mid - 1;
            }
            ll k = b[l1] - b[l - 1];
            ll t = u - k;
            if (t >= a[l1 + 1] - t) l1++;
            cout << min((int) n, l1) << " ";
        }
        cout << endl;

    }
    cout << endl;
    return 0;
}


