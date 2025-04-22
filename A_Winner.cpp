#include <bits/stdc++.h>
using namespace std;

#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n;
    cin >> n;

    unordered_map<string, int> mp;
    string winner;
    int maxval = INT_MIN;
    vector<pair<string, int>> moves;

    for (int i = 0; i < n; i++) {
        string name;
        int score;
        cin >> name >> score;
        moves.push_back({ name,score });

        mp[name] += score;

    }

    for (auto p : mp) {
        maxval = max(maxval, p.second);

    }
    unordered_map<string, bool> mp2;
    for (auto p : mp) {
        if (p.second == maxval)
            mp2[p.first] = true;
    }
    //abar move gulo dibo
    mp.clear();
    for (auto p : moves) {
        string nm = p.first;
        int scr = p.second;
        mp[nm] += scr;
        if (mp2[nm] && mp[nm] >= maxval) {
            cout << nm << endl;
            return;

        }
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
