#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int n;
    cin >> n;
    vector<ll> a(n), b(n), diff(n);
    for (int i = 0;i < n;i++) cin >> a[i];
    for (int i = 0;i < n;i++) cin >> b[i];
    for (int i = 0;i < n;i++) diff[i] = a[i] - b[i];
    sort(diff.begin(), diff.end());

    ll result = 0;
    for (int j = n - 1;diff[j] >= 0 and j >= 0;j--) {
        ll el = diff[j] * -1 + 1;
        auto it = lower_bound(diff.begin(), diff.end(), el);
        int len = diff.end() - it - (n - j);
        if (len < 0) len = 0;

        result += len;

    }
    cout << result << endl;


    return 0;
}