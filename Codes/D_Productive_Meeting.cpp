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

    set<pair<int, int>> s;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x > 0) {
            s.insert({ x, i });
        }
    }

    vector<pair<int, int>> interactions;

    while (s.size() > 1) {

        auto high = prev(s.end());
        auto low = s.begin();


        int h_val = high->first, h_idx = high->second;
        int l_val = low->first, l_idx = low->second;

        s.erase(high);
        s.erase(low);

        interactions.push_back({ h_idx, l_idx });

        if (--h_val > 0) s.insert({ h_val, h_idx });
        if (--l_val > 0) s.insert({ l_val, l_idx });
    }

    cout << interactions.size() << "\n";
    for (auto p : interactions) {
        cout << p.first << " " << p.second << endl;
    }
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
