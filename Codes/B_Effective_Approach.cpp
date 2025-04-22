#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for(int i=0;i<n;i++){cin>>arr[i]};
int main() {
    ll n;
    cin >> n;
    vl mp(n + 5);
    ll x;
    for (int i = 1;i <= n;i++) {
        cin >> x;
        mp[x] = i;
    }
    int q;
    cin >> q;
    ll vs = 0, pet = 0;
    while (q--)
    {
        ll num;
        cin >> num;
        vs += (mp[num]);
        pet += (n - mp[num] + 1);

    }
    cout << vs << " " << pet << endl;


    return 0;
}
//whatever
