#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    ll h = 0;
    int ans = 0;
    priority_queue<int, vector<int>, greater<int>> pq; 

    for (int i = 0; i < n; i++) {
        if (arr[i] + h >= 0) {
            ans++;
            h += arr[i];
            if (arr[i] < 0) {
                pq.push(arr[i]); 
            }
        }
        else if (!pq.empty() && pq.top() < arr[i]) {
            h -= pq.top();  
            h += arr[i];    
            pq.pop();       
            pq.push(arr[i]); 
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
