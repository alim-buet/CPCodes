#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;cin >> a >> b;
        int kingX, kingY, queenX, queenY;
        cin >> kingX >> kingY >> queenX >> queenY;
        set<pair<int, int>> possible_move;
        //for king
        possible_move.insert(make_pair(kingX - a, kingY + b));
        possible_move.insert(make_pair(kingX - a, kingY - b));
        possible_move.insert(make_pair(kingX + a, kingY + b));
        possible_move.insert(make_pair(kingX + a, kingY - b));
        possible_move.insert(make_pair(kingX + b, kingY + a));
        possible_move.insert(make_pair(kingX + b, kingY - a));
        possible_move.insert(make_pair(kingX - b, kingY + a));
        possible_move.insert(make_pair(kingX - b, kingY - a));
        int ans = 0;
        for (auto p : possible_move) {
            int x = p.first;
            int y = p.second;
            int x_diff = abs(queenX - x);
            int y_diff = abs(queenY - y);
            if ((x_diff == a and y_diff == b) or (x_diff == b and y_diff == a)) {
                ans++;
            }
        }

        cout << ans << endl;





    }
    return 0;
}