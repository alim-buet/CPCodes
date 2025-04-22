#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for(int i=0;i<n;i++){cin>>arr[i]};
bool compareSecond(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vi arr(n);
        ll sum = 0;
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        vector<pair<int, int>> diff;
        for (int i = 0;i < n - 1;i++) {
            diff.push_back(make_pair(i, abs(arr[i + 1] - arr[i]))); //ith ind er sather porer tar abs dif

        }
        sort(diff.begin(), diff.end(), compareSecond);
        int cnt = 0;
        int i = 0;
        while (cnt < k) {
            sum -= diff[k].second;
            cnt++;
        }
        cout << sum << endl;
    }
    return 0;
}