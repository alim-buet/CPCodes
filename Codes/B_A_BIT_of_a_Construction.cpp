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
        int temp = k;
        int curr_sum = 0;
        int kdigit = 0;
        if (n == 1) cout << k << endl;
        else {
            while (temp) {
                kdigit++;
                temp /= 2;
            }
            int masternum = ((1 << (kdigit - 1)) - 1);
            int rem = k - masternum;
            cout << masternum << " ";
            cout << rem << " ";
            for (int i = 1;i <= n - 2;i++) cout << "0 ";
            cout << endl;

        }



    }
    return 0;
}