#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    ll n, k, x;cin >> n >> k >> x;
    vl arr(n);
    ll stable_group = 1;
    for (int i = 0;i < n;i++) { cin >> arr[i]; }
    sort(arr.begin(), arr.end());
    vl gaps;
    for (int i = 0;i < n - 1;i++) {
        if ((arr[i + 1] - arr[i]) > x) {
            stable_group++;
            gaps.push_back((arr[i + 1] - arr[i]));
        }
    }

    sort(gaps.begin(), gaps.end());

    for (auto g : gaps) {
        ll req = (g % x == 0) ? g / x - 1 : g / x;
        //cout << "req = " << req << endl;
        if (req <= k) {
            stable_group--;
            k -= req;
        }
        else break;
    }

    cout << stable_group << endl;



    return 0;
}