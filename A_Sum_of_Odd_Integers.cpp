#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        if ((n % 2 == 0 && k % 2 == 1) || (n % 2 == 1 && k % 2 == 0)) no
        else {
            if (n < k * k) no //taking even the smallest of k odd numbers will excedx the given n
            else yes
        }
    }
    return 0;
}