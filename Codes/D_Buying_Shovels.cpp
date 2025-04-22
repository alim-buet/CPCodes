#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll shov, pack;
        cin >> shov >> pack;

        ll smalldiv = -1;
        int flag = 0;
        for (ll i = 1; i * i <= shov;i++) {
            if (shov % i == 0 && shov / i <= pack) {
                smalldiv = i;
                flag = 1;
                break;
            }
            if (shov % i == 0) {
                if (i <= pack) {
                    smalldiv = i;
                }


            }
        }
        if (smalldiv == -1) cout << shov << endl;
        else if (flag == 1) cout << smalldiv << endl;
        else cout << shov / smalldiv << endl;




    }
    return 0;
}