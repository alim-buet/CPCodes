#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        
        int ans = 1;
        for (int i = 1;i * i <= x;i++) {
            if (x % i == 0) {
                if (x / i >= n) ans = max(ans, i);
                if (i >= n) ans = max(ans, x / i);


            }
        }
        cout << ans << endl;

    }


    return 0;
}