#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {

}

int main() {
    int n;cin >> n;
    string a, b;
    cin >> a >> b;
    ll cost = 0;
    for (int i = 0;i < n - 1;i++) {
        if (a[i] != b[i]) {
            if (a[i + 1] != b[i + 1] and (a[i] != a[i + 1])) {
                a[i] = b[i];
                a[i + 1] = b[i + 1];
                cost++;
            }
            else {
                a[i] = b[i];
                cost++;
            }
        }
    }
    cost += (a[n - 1] != b[n - 1]);
    cout << cost << endl;
    return 0;
}