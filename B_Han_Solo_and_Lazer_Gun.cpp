#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    double n, x, y;
    cin >> n >> x >> y;
    const double inf = 1e9;
    unordered_map<double, int> mp;
    ll ans = 0;
    for (int i = 0; i < n;i++){
        double a, b;cin>>a>>b;
        double slope;
        if(x-a ==0){
            slope = inf;
        }
        else{
            slope = (y - b) / (x - a);

        }
        if(mp[slope]==0){
            mp[slope] = 1;
            ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}