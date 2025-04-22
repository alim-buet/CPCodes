#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for(int i=0;i<n;i++){cin>>arr[i]};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int y = x - 1;
        int maxans = __gcd(y, x) + y;


        for (int i = y - 1;i >= 1;i--) {
            int temp = __gcd(x, i) + i;
            if (temp > maxans) { y = i;maxans = temp; }

        }
        cout << y << endl;
    }
    return 0;
}