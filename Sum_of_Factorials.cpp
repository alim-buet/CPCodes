#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
int main() {
    int t;
    cin >> t;
    vector<ll> factorials(21);
    factorials[0] = 1;
    ll k = 1;
    for (long long int i = 1; i <= 20; i++)
    {
        factorials[i] = i * k;
        k = factorials[i];
    }
    vector<ll> prefixsum(21);
    prefixsum[0] = 1;
    for (int i = 1;i < 21;i++) {
        prefixsum[i] = prefixsum[i - 1] + factorials[i];
    }

    for (int T = 1;T <= t;T++) {
        int n;
        cin >> n;
        //take input   find prefix sum kuntar theke boro ba shoman oi position 
        // there will be a checker je dekhbe current n last prefix theke strictly boro ebong er porer factorial theke strictly chuto kina
        //jodi hoy then impossible
        // else ans array te 
        int flag = 1;
        vi ans;
        while (n && flag)
        {
            int i = 0;
            while (prefixsum[i] < n) {
                i++;
            }
            if (n > prefixsum[i - 1] && factorials[i] > n) flag = 0;
            else {
                n -= factorials[i];
                ans.push_back(i);
            }

        }
        if (flag) {
            cout << "Case " << T << ": ";
            int len = ans.size();
            for (int i = len - 1;i >= 0;i--) {
                if (i == 0) cout << ans[i] << "!" << endl;
                else cout << ans[i] << "!+";
            }

        }
        else {
            cout << "Case " << T << ": impossible" << endl;
        }

    }
    return 0;
}