#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    long long n, m;
    cin >> n >> m;
    //kmin

    long long extra = n % m;
    cout << ((m - extra) * (n / m * (n / m - 1) / 2)) + extra * (n / m * (n / m + 1) / 2) << " ";
    //kmax
    long long bulk = n - (m - 1);
    cout << bulk * (bulk - 1) / 2 << endl;

    return 0;
}