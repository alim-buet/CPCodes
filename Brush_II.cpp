#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    for (int T = 1;T <= t;T++) {
        getchar();
        int n, w;
        cin >> n >> w;
        vi y(n);
        int issorted = 1;
        int x;
        cin >> x >> y[0];
        for (int i = 1;i < n;i++) {

            cin >> x >> y[i];
            if (y[i - 1] > y[i]) issorted = 0;

        }
        if (!issorted) {
            sort(y.begin(), y.end());
        }
        int lo = y[0];
        int loind = 0;
        int move = 1;
        while (lower_bound(y.begin(), y.end(), lo + w + 1) != y.end())
        {
            move++;
            lo = *lower_bound(y.begin(), y.end(), lo + w + 1);
            
        }
        cout << "Case " << T << ": " << move << endl;

    }
    return 0;
}