#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0;i < n;i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    ll move = 0;
    for (int i = 0;i < n;i++) {
        move += abs((i + 1) - arr[i]);
    }
    cout << move << endl;
    return 0;
}