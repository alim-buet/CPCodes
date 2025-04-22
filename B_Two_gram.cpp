#include<bits/stdc++.h>
using namespace std;
bool mysort(pair<string, int>& a, pair<string, int>& b) {
    return a.second > b.second;
}
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<string, int> grams;
    for (int i = 0; i < n - 1; i++)
    {
        string curr = string(1, s[i]) + s[i + 1];
        grams[curr]++;
    }
    vector<pair<string, int>> mapvector(grams.begin(), grams.end());
    sort(mapvector.begin(), mapvector.end(), mysort);
    auto& ans = mapvector.front();
    cout << ans.first << endl;


    return 0;
}