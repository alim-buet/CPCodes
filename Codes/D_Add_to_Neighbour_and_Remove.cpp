#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n;cin >> n;
    vi arr(n);
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    vi presum(n);
    presum[0] = arr[0];
    for (int i = 1;i < n;i++) presum[i] = arr[i] + presum[i - 1];
    int maxpartition = -1;
    for (int fl = 0;fl < n;fl++) {
        int partition_count = 1;

        int eqlsum = presum[fl];
        int chunk_first = fl + 1;
        int chunk_second = chunk_first;
        if (fl == n - 1) {
            maxpartition = max(maxpartition, partition_count);
            break;
        }
        for (chunk_second;chunk_second < n;chunk_second++) {
            if (presum[chunk_second] - presum[chunk_first - 1] == eqlsum) {
                partition_count++;
                chunk_first = chunk_second + 1;

            }
        }
        if (chunk_first == n) {
            maxpartition = max(maxpartition, partition_count);
        }

    }
    cout << n - maxpartition << endl;
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