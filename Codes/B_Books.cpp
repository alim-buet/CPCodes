#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    int arr[n];
    long long sum = 0;
    int l = 0;
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    int ans = 0;
    
    for (int f = 0;f < n;f++) {
        while ((sum + arr[l]) <= t && l<n)
        {
            sum += arr[l];
            l++;

        }
        sum -= arr[f];

        ans = max(ans, l - f);


    }
    cout << ans << endl;
    return 0;
}