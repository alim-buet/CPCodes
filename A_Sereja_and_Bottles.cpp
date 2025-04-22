#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori(n) for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> pairs;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        pairs.push_back(make_pair(x, y));
    }

    int count = n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (pairs[i].first == pairs[j].second) {
                count--;
                break;
            }
        }
    }

    cout << count << endl;
    return 0;
}
