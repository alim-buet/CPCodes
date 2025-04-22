#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int PrefSum[n + 5], Arr[n + 5];
    PrefSum[0] = 0;
    for (int i = 1;i <= n;i++) {
        cin >> Arr[i];
        PrefSum[i] = Arr[i] + PrefSum[i - 1];
        // 
    }
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        sum = (long long) PrefSum[r] - (long long) PrefSum[l] + Arr[l];
        cout << sum << endl;
    }
    



    return 0;
}