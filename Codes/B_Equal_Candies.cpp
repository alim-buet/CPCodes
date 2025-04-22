#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int candies[n];
        int mincandies = INT_MAX - 1;
        for (int i = 0;i < n;i++) {
            cin >> candies[i];
            mincandies = min(mincandies, candies[i]);
        }
        int toeat = 0;
        for (int i = 0;i < n;i++) {
            toeat += (candies[i] - mincandies);

        }
        cout << toeat << endl;
    }

    return 0;
}