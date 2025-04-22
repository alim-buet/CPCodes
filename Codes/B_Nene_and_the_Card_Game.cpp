#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi cards(n + 1, 0);
        int ans = 0;
        for (int i = 0;i < n;i++) {
            int x;
            cin >> x;
            cards[x]++;
            if (cards[x] == 2) ans++;
        }
        cout << ans << endl;

    }
    return 0;
}