#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define ll long long

void solve() {
    int n;
    cin >> n;
    vi arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll totalSum = accumulate(arr.begin(), arr.end(), 0LL);

    if (totalSum % 2 != 0) {
        no
            return;
    }

    int maxElement = *max_element(arr.begin(), arr.end());
    ll halfSum = totalSum / 2;
    if (maxElement > halfSum) {
        no
            return;
    }

    yes
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
