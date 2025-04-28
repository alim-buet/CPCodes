#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<ll>
#define ll      long long
#define vl      vector<long long>
bool check(ll time , vector<ll> job_count){
    ll n = job_count.size();
    ll other_job = 0;
    ll overTimeJob = 0;

    for (ll i = 1; i < n;i++){
        if(time>=job_count[i]){
            overTimeJob += (time - job_count[i]) / 2;
        }
        else{
            other_job += (job_count[i] - time);
        }
    }
    if(other_job<=overTimeJob)
        return true;
    return false;
}

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> job_count(n + 1, 0);
    for (ll i = 0; i < m;i++){
        ll x;
        cin >> x;
        job_count[x]++;
    }
    //bs
    ll lo = 0, hi = 1e9;
    ll mid;
    ll ans;
    while(lo<=hi){
        mid = lo + (hi - lo) / 2;
        if(check(mid,job_count)){
            ans = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}