#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int n; cin >> n;
    vi arr(n);
    for (int i = 0;i < n;i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int ans = 1;
    int j = 0;
    for (int i = 0;i < n;i++) {

        while (j < n and arr[j] - arr[i] <= 5) {
            j++;

        }
        ans = max(ans, j - i);
    }
    cout << ans << endl;
    return 0;
}