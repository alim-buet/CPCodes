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
        for (int i = 1;i <= n;i++) {
            if (i % 2) cout << (i + 1) / 2 << " ";
            else {
                cout << (n - (i - 2) / 2) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
//had to look for hint