#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
bool custom_cmp(pair<int, int>& a, pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second;

    }
    return a.first < b.first;
}

int main() {

    int n;
    cin >> n;
    vector<pair<int, int>> a_bpair;
    for (int i = 0;i < n;i++) {
        int a, b;
        cin >> a >> b;
        a_bpair.push_back(make_pair(a, b));
    }
    sort(a_bpair.begin(), a_bpair.end(), custom_cmp);
    int day = a_bpair[0].second;
    for (int i = 0;i < n - 1;i++) {
        if (a_bpair[i + 1].second >= day) {
            day = a_bpair[i + 1].second;
        }
        else {
            day = a_bpair[i + 1].first;
        }

    }
    cout << day << endl;



    return 0;
}