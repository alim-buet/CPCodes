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
        string s;
        cin >> s;
        int streak = 1;
        int maxstreak = 1;
        for (int i = 1;i < n;i++) {
            if (s[i] == s[i - 1]) streak++;
            else {
                maxstreak = max(streak, maxstreak);
                streak = 1;
            }
        }
        maxstreak = max(streak, maxstreak);

        cout << maxstreak + 1 << endl;
    }
    return 0;
}