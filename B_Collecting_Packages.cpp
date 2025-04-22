#include <bits/stdc++.h>
using namespace std;

#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

bool mycomp(pair<int, int>& a, pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> coordinates;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            coordinates.push_back(make_pair(x, y));
        }

        sort(coordinates.begin(), coordinates.end(), mycomp);

        bool ispossible = true;
        int prevy = coordinates[0].second;

        for (int i = 1; i < n; i++) {
            if (coordinates[i].second < prevy) {
                ispossible = false;
                break;
            }
            prevy = coordinates[i].second;
        }

        if (!ispossible) {
            no
        }
        else {
            yes
                int curr_x = 0, curr_y = 0;

            for (int i = 0; i < n; i++) {
                int diff_x = coordinates[i].first - curr_x;
                int diff_y = coordinates[i].second - curr_y;

                for (int j = 0; j < diff_x; j++) cout << "R";
                for (int j = 0; j < diff_y; j++) cout << "U";

                curr_x = coordinates[i].first;
                curr_y = coordinates[i].second;
            }
            cout << endl;
        }
    }
    return 0;
}
