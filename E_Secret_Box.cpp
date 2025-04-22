#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
long long countPlacements(int x, int y, int z, long long k) {
    // s er x,y,z must be less then equal to B er x,y,z 10^6 should be fine 
    long long maxCount = 0;
    for (int a = 1; a <= x; a++) {
        if (k % a != 0) continue;
        long long k1 = k / a;
        for (int b = 1; b <= y; b++) {
            if (k1 % b != 0) continue;
            long long c = k1 / b;
            if (c <= z && a * b * c == k) {
                //prottektar move Bx - Sx +1 and so on
                maxCount = max(maxCount, (x - a + 1) * (y - b + 1) * (z - c + 1)); 
            }
        }
    }
    return maxCount;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        ll k;
        cin >> x >> y >> z >> k;
        cout << countPlacements(x, y, z, k) << endl;

    }
    return 0;
}