#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnts(n + 1);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnts[x]++;
        }

        int uniqnums = n + 1 - count(cnts.begin(), cnts.end(), 0);
        int maxcnt = *max_element(cnts.begin(), cnts.end());
        int ans = max(min(uniqnums, maxcnt - 1), min(uniqnums - 1, maxcnt));
        cout << ans << endl;
    }

    return 0;
}