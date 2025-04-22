#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    ll n, k;cin >> n >> k;
    vl arr(n);
    for (int i = 0;i < n;i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    ll mean = arr[n / 2];

    ll bar = 1;
    while (1) {
        ll dist = arr[(n / 2) + bar] - mean;
        if (dist == 0) {
            bar++;
            continue;
        }
        if (dist * bar > k) break;
        else {
            mean = arr[(n / 2) + bar];
            k -= (dist) *bar;
            if ((n - 1) / 2 >= bar) bar++;
            else break;
        }
    }

    mean += (k) / bar;
    cout << mean << endl;
    return 0;
}