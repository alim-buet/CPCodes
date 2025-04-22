#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int n;cin >> n;
    vl times(n);
    for (int i = 0;i < n;i++) cin >> times[i];
    sort(times.begin(), times.end());
    int happy = 0;
    int satisfied_sum = 0;
    for (int i = 0;i < n;i++) {
        if (times[i] >= satisfied_sum) {
            happy++;
            satisfied_sum += times[i];
        }
    }
    cout << happy << endl;
    return 0;
}