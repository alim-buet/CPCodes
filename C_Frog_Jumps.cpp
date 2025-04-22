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
        string s;
        cin >> s;
        int n = s.length();
        int maxd = -1;
        int lastr = -1;
        for (int i = 0;i < n;i++) {
            if (s[i] == 'R') {

                maxd = max(maxd, (i - lastr));
                lastr = i;
            }
        }
        maxd = max(maxd, (n - lastr));
        cout << maxd << endl;




    }
    return 0;
}