#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int n;
    cin >> n;

    int nums[n];
    int arr[1000] = { 0 };

    for (int i = 0;i < n;i++) {
        cin >> nums[i];
        arr[nums[i]]++;
    }
    for (int i = 0;i < 1000;i++) {
        if (arr[i] != 0) cout << i << " ";
        else continue;

    }
    return 0;
}
spoj er sliding window problem ta solve kor
spoj er broken keyboard problem solve kor
code forces er pokemon go problem solve
