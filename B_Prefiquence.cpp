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
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int count = 0;
        int bi = 0;

        for (int i = 0;i < n && b[bi];i++) {
            int currchar = a[i];
            while (b[bi]) {
                if (currchar == b[bi]) {
                    count++;
                    bi++;

                    break;
                }
                bi++;
            }
        }
        cout << count << endl;
    }
    return 0;
}