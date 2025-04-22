#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define ll long long
#define vl vector<long long>
#define fori for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> p;
    vector<int> processed; // To track second values that have been processed
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        p.push_back({ x, y });
    }

    // Step 1: Sort pairs by their first element, then by second if first is equal
    sort(p.begin(), p.end());

    ll ans = 0;

    // Step 2: Process each pair and calculate the contribution
    for (auto pr : p) {
        // Use binary search to count the number of elements greater than pr.second
        auto it = upper_bound(processed.begin(), processed.end(), pr.second);
        ans += processed.end() - it;

        // Insert the current second value into the processed list and keep it sorted
        processed.insert(lower_bound(processed.begin(), processed.end(), pr.second), pr.second);
    }

    cout << ans << "\n";
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
