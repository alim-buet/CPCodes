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
    vi a(n + 1), b(n + 1), a_pos(n + 1), b_pos(n + 1);
    for (int i = 1;i <= n;i++) { cin >> a[i];a_pos[a[i]] = i; }
    for (int i = 1;i <= n;i++) { cin >> b[i];b_pos[b[i]] = i; }

    vi r_possdiff(n + 1), l_possdiff(n + 1);
    //right shifting er jonno
    for (int i = 1;i <= n;i++) {
        if (a_pos[i] >= b_pos[i]) {
            r_possdiff[a_pos[i] - b_pos[i]]++;
        }
        else {
            r_possdiff[a_pos[i] - b_pos[i] + n]++;
        }
    }
    int ans = *max_element(r_possdiff.begin(), r_possdiff.end());
    //left shifting er jonno
    for (int i = 1;i <= n;i++) {
        if (a_pos[i] <= b_pos[i]) {
            l_possdiff[b_pos[i] - a_pos[i]]++;
        }
        else {
            l_possdiff[b_pos[i] - a_pos[i] + n]++;
        }
    }
    ans = max(ans, *max_element(l_possdiff.begin(), l_possdiff.end()));
    cout << ans << endl;

    return 0;
}