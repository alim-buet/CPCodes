#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vi healths(n);
        vi pos(n);

        for (int i = 0;i < n;i++) {
            cin >> healths[i];
        }
        int maxpos = -1;
        for (int i = 0;i < n;i++) {
            cin >> pos[i];
            pos[i] = abs(pos[i]);
            maxpos = max(maxpos, abs(pos[i]));
        }
        long long temp = 0;
        vector<long long> counts(maxpos + 5, 0);
        for (int i = 0;i < n;i++) {
            counts[pos[i]] += healths[i];
        }
        int flag = 1;
        for (int i = 0;i <= maxpos;i++) {
            temp += counts[i];
            if (temp > (k * i)) {
                flag = 0;
                break;
            }
        }
        if (flag) yes
        else no

    }
    return 0;
}