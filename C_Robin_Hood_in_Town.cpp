#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int maxrichind;

int unhappyCount(vl& arr, ll x) {
    int count = 0;
    int premax = arr[maxrichind];
    ll totalsum = accumulate(arr.begin(), arr.end(), 0LL) + x;
    arr[maxrichind] += x;
    double avg = (double) totalsum / (arr.size());
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < (avg / 2.00)) {
            count++;
        }
    }
    arr[maxrichind] = premax;
    return count;
}

void solve() {
    int n; cin >> n;
    vl arr(n);
    ll maxrich = -1;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > maxrich) {
            maxrich = arr[i];
            maxrichind = i;
        }
    }

    if (n == 1 or n == 2) {
        cout << -1 << endl;
        return;
    }

    ll low = 0, high = 1e12, answer = -1;
    while (low <= high) {
        ll mid = (low + high) / 2;

        if (unhappyCount(arr, mid) > n / 2) {
            answer = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << answer << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
