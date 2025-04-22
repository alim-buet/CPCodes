#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int n, x;
    cin >> n;
    int groups[5] = { 0 };//(i)th index e i sokha bishisto friend group er sonkha thakbe
    for (int i = 0;i < n;i++) {
        cin >> x;
        groups[x]++;
    }
    int ans = 0;
    ans += groups[4];
    ans += groups[3];
    groups[1] = (groups[1] > groups[3]) ? (groups[1] - groups[3]) : 0;
    ans += (groups[2]) / 2;
    if (groups[2] % 2) {
        //2 jon baki
        if (groups[1] > 2) {
            ans += (1 + ceil(((float) (groups[1] - 2)) / 4));


        }
        else ans += 1;
    }
    else {
        ans += ceil(groups[1] / 4.0);
    }

    cout << ans << endl;
    return 0;
}