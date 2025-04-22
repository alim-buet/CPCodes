#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n % 2) cout << 1 << endl;
        else {
            int x = 1;
            while (!(n % x))
            {
                x++;
            }
            cout << x - 1 << endl;
        }



    }

    return 0;
}