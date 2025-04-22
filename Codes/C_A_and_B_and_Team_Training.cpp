#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }


int main() {
    int m, n;cin >> m >> n;
    int minMember = min(m, n);
    int maxMember = max(m, n);
    if (minMember < (maxMember - minMember)) {
        cout << minMember << endl;
    }
    else {
        cout << (maxMember - minMember) + 2 * (2 * minMember - maxMember) / 3 << endl;
    }
    return 0;
}