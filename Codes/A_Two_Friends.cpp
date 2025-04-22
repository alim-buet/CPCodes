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
        int n;
        cin >> n;
        vi bf(n + 1);
        for (int i = 1;i <= n;i++) {
            cin >> bf[i];
        }
        int flag = 0;
        for (int i = 1;i <= n;i++) {
            if (bf[bf[i]] == i) flag = 1;

        }
        if (flag) cout << 2 << endl;
        else cout << 3 << endl;

    }
    return 0;
}