//using top down mehtod..

#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
const int N = 100005;
vector<int> seq(N);
vector<int> dp(N, 0);

int lis(int ind) {
    if (dp[ind] != 0) return dp[ind];
    if (ind == 0) return 1;
    int ans = 1;
    for (int i = 0; i < ind; i++)
    {
        if (seq[ind] > seq[i]) {
            ans = max(ans, lis(i) + 1);
        }
    }
    return ans;


}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> seq[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, lis(i));
    }
    cout << ans << endl;




    return 0;
}