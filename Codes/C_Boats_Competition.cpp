#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int GroupWithW(vi& weights, int w) {
    vi mp(105, 0);
    int count = 0;
    for (int i = 0;i < weights.size();i++) {
        if (w - weights[i] >= 0 && mp[w - weights[i]]) {
            count++;
            mp[w - weights[i]]--;

        }
        else {
            mp[weights[i]]++;
        }

    }
    //cout << count << endl;
    return count;

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vi weights(n);
        for (int i = 0;i < n;i++) {
            cin >> weights[i];
        }

        int ans = 0;
        //cout << "sdkjlfk" << endl;
        sort(weights.begin(), weights.end());
        int minind = weights[0] + weights[1];
        for (int j = minind;j < 105;j++) {
            int curr = GroupWithW(weights, j);
            ans = max(ans, curr);
        }


        cout << ans << endl;
    }

    return 0;
}