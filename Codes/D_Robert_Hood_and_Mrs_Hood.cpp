#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n, d, k;
    cin >> n >> d >> k;

    vi jobActive(n + 2, 0);
    vi jobStart(n + 2, 0);
    for (int i = 0; i < k; ++i) {
        int l, r;
        cin >> l >> r;
        jobActive[l]++;
        if (r + 1 <= n) {
            //porer second e inactive
            jobActive[r + 1]--;
        }
        jobStart[l]++;
    }
    for (int i = 1; i <= n; i++) {
        jobStart[i] += jobStart[i - 1];
    }
    //presum ..
    for (int i = 1; i <= n; ++i) {
        jobActive[i] += jobActive[i - 1];
    }

    //per window te job count min max kora lagbe
    int broPos = -1, momPos = -1;
    int broMax = INT_MIN, momMin = INT_MAX;
    for (int i = 1; i <= (n - d + 1); i++) {
        int totalJobs = jobActive[i] + (jobStart[i + d - 1] - jobStart[i]);
        if (totalJobs > broMax) {
            broPos = i;
            broMax = totalJobs;
        }
        if (totalJobs < momMin) {
            momPos = i;
            momMin = totalJobs;
        }
    }
    cout << broPos << " " << momPos << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
