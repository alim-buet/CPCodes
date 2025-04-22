#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first > b.first;
}
void solve() {
    int n;cin >> n;
    vi arr1(n), arr2(n);
    for (int i = 0;i < n;i++) cin >> arr1[i];
    for (int i = 0;i < n;i++) cin >> arr2[i];
    vector<pair<int, int>> diff;
    for (int i = 0;i < n;i++) {
        diff.push_back(make_pair(arr1[i] - arr2[i], i + 1));
    }
    sort(diff.begin(), diff.end(), cmp);
    int count = 1;
    int maxel = diff.front().first;
    for (int i = 1;i < n;i++) {
        if (diff[i].first != maxel) break;
        count++;
    }
    cout << count << endl;
    for (int i = 0;i < count;i++) cout << diff[i].second << " ";
    cout << endl;


}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}