#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vi OnesIndex, TwosIndex, ThreesIndex;
        for (int i = 0;i < s.size();i++) {
            if (s[i] == '1') OnesIndex.push_back(i);
            else if (s[i] == '2') TwosIndex.push_back(i);
            else ThreesIndex.push_back(i);
        }
        int i, j, k;
        i = j = k = 0;
        int ans = INT_MAX;
        while (i < OnesIndex.size() && j < TwosIndex.size() && k < ThreesIndex.size()) {
            int minind = min(OnesIndex[i], min(TwosIndex[j], ThreesIndex[k]));
            if (minind == OnesIndex[i]) {
                int currlen = max(TwosIndex[j],ThreesIndex[k]) - minind + 1;
                ans = min(ans, currlen);
                i++;
            }
            else if (minind == TwosIndex[j]) {
                int currlen = max(OnesIndex[i],ThreesIndex[k]) - minind + 1;
                ans = min(ans, currlen);
                j++;

            }
            else {
                int currlen = max(TwosIndex[j] ,  OnesIndex[i]) - minind + 1;
                ans = min(ans, currlen);
                k++;

            }

        }
        if (OnesIndex.size()==0 || TwosIndex.size()==0 || ThreesIndex.size()==0) cout << 0 << endl;
        else cout << ans << endl;

    }
    return 0;
}