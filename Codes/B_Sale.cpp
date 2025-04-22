#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int prices[n];
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    sort(prices, prices + n);
    int total = 0;
    for (int i = 0;i < m && prices[i] <= 0;i++) {
        total -= prices[i];
    }
    cout << total << endl;

    return 0;
}