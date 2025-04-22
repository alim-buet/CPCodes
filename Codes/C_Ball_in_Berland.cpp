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
        int b, g, k;cin >> b >> g >> k;
        //we have to create a graph. the graph will be bipartite.. 
        vi boys(k + 1), girls(k + 1);
        for (int i = 0;i < k;i++) cin >> boys[i];
        for (int i = 0;i < k;i++) cin >> girls[i];
        vector<vector<int>> graph(b + 1);
        for (int i = 0;i < k;i++) {
            graph[boys[i]].push_back(girls[i]);
        }
        vector<vector<int>> rev_graph(g + 1);
        for (int i = 0;i < k;i++) {
            rev_graph[girls[i]].push_back(boys[i]);
        }
        vi ending_girl_cnt(g + 1);
        ll cum_sum = 0;
        ll ans = 0;
        for (int i = 1;i <= b;i++) {
            for (auto el : graph[i]) {
                ending_girl_cnt[el]++;
                cum_sum++;
            }
            ll candidate = k - (cum_sum);
            for (auto el : graph[i]) {
                ans += (candidate - (rev_graph[el].size() - ending_girl_cnt[el]));
            }

        }
        cout << ans << endl;


    }
    return 0;
}