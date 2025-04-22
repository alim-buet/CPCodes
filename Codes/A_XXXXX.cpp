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
        int n, x;
        cin >> n >> x;
        vi arr(n);
        ll sum = 0;
        int firstmismathc = -1;
        for (int i = 0;i < n;i++) {

            cin >> arr[i];
            sum += arr[i];
            if (sum % x != 0 && firstmismathc == -1) {
                firstmismathc = i;
            }
        }
        if (sum % x != 0) cout << n << endl;
        else {
            int lastmismathc = -1;
            ll sum2 = 0;
            for (int i = n - 1;i >= 0;i--) {
                sum2 += arr[i];
                if (sum2 % x != 0 && lastmismathc == -1) {
                    lastmismathc = i;
                    break;
                }
            }
            if (firstmismathc == -1 && lastmismathc == -1) {
                cout << (-1) << endl;
            }
            else {
                cout << (n - min(firstmismathc + 1, n - lastmismathc)) << endl;
            }
        }
    }
    return 0;
}