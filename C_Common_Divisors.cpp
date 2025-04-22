#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
int isOkay(vi & arr, vl & presum, ll mid) {
    
}

int main() {
    int n;
    cin >> n;
    vi arr(n);
    vl presum(n);
    cin >> arr[0];
    presum[0] = arr[0];
    for (int i = 1;i < n;i++) {
        cin >> arr[i];
        presum[i] = presum[i - 1] + arr[i];
    }
    ll ans = 0;
    
    return 0;
}