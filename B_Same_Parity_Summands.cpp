#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if ((n < 2 * k && ((n - k) % 2 == 1)) || (n >= 2 * k && n % 2 == 1 && ((n - k) % 2 == 1)) || (k > n)) {
            no
        }
        else {
            yes
                if (n % 2 == 0 && n >= 2 * k) {
                    for (int i = 1;i <= k - 1;i++) {
                        cout << 2 << " ";
                    }
                    cout << (n - 2 * (k - 1)) << endl;
                }
                else {
                    for (int i = 1;i <= k - 1;i++) {
                        cout << 1 << " ";
                    }
                    cout << n - (k - 1) << endl;
                }

        }
    }
    return 0;
}