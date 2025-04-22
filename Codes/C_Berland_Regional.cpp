#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;

    unordered_map<int, vector<int>> universityRatings;

    vector<int> universityId(n);
    for (int i = 0; i < n; i++) {
        cin >> universityId[i];
    }

    for (int i = 0; i < n; i++) {
        int skill;
        cin >> skill;
        universityRatings[universityId[i]].push_back(skill);
    }

    vector<ll> result(n + 1, 0);

    for (auto& [id, ratings] : universityRatings) {
        sort(ratings.rbegin(), ratings.rend());

        vector<ll> prefixSums(ratings.size() + 1, 0);
        for (int i = 0; i < ratings.size(); i++) {
            prefixSums[i + 1] = prefixSums[i] + ratings[i];
        }

        int m = ratings.size();
        for (int k = 1; k <= m; k++) {
            int div = m / k;  
            result[k] += prefixSums[div * k];
        }
    }
    for (int k = 1; k <= n; k++) {
        cout << result[k] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
