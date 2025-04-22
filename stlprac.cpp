#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    vi arr;
    for (int i = 0;i < 10;i++) {
        arr.push_back(i * i);
    }

    int ans = *lower_bound(arr.begin(), arr.end(), 8);
    cout << ans << endl;
    return 0;
}