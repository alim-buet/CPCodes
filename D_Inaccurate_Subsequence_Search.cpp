#include <bits/stdc++.h>
using namespace std;

#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vi a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    unordered_map<int, int> freqB, freqWindow;
    for (int num : b) freqB[num]++;

    int matches = 0, goodSegments = 0;

    for (int i = 0; i < m; i++) {
        freqWindow[a[i]]++;
        if (freqWindow[a[i]] <= freqB[a[i]]) matches++;
    }

    if (matches >= k) goodSegments++;

    for (int i = m; i < n; i++) {
        int left = a[i - m];
        if (freqWindow[left] <= freqB[left]) matches--;
        freqWindow[left]--;
        if (freqWindow[left] == 0) freqWindow.erase(left);

        int right = a[i];
        freqWindow[right]++;
        if (freqWindow[right] <= freqB[right]) matches++;

        if (matches >= k) goodSegments++;
    }

    cout << goodSegments << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
