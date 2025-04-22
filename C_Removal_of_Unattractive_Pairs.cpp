#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> charfreq(260, 0);
        for (int i = 0;i < n;i++) {
            charfreq[s[i]]++;
        }

        int maxfreq = -1;
        for (int i = 0;i < 260;i++) {
            maxfreq = max(maxfreq, charfreq[i]);
        }
        if (maxfreq > n / 2) {
            cout << maxfreq - (n - maxfreq) << endl;
        }
        else {
            if (n % 2) cout << 1 << endl;
            else cout << 0 << endl;
        }

    }
    return 0;
}