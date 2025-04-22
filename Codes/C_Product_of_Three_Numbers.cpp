#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
int isfactorized(ll n, ll low) {
    int flag = 0;
    for (int i = low;i * i < n;i++) {
        if (n % i == 0) {
            flag = i;

            break;
        }
    }
    return flag;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        int flag = 0;
        int a, b, c;

        for (int i = 2;i * i * i <= n;i++) {
            if (n % i == 0 && isfactorized(n / i, i + 1)) {
                a = i;
                b = isfactorized(n / i, i + 1);
                c = (n) / (a * b);
                flag = 1;
                break;
            }

        }
        if (flag) cout << "YES" << endl << a << " " << min(b, c) << " " << max(b, c) << endl;
        else no





    }
    return 0;
}