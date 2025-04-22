#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
    return (a.second > b.second);
}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> SandE;
        for (int i = 0;i < n;i++) {
            int s, e;
            cin >> s >> e;
            SandE.push_back(make_pair(s, e));

        }
        sort(++SandE.begin(), SandE.end(), cmp);
        if (SandE[0].first <= SandE[1].first) {
            if (SandE[0].second > SandE[1].second) {
                cout << SandE[0].first - 1 << endl;
            }
            else {
                cout << (-1) << endl;
            }
        }
        else {
            cout << SandE[1].first + 1 << endl;
        }
    }



    return 0;
}