#include<bits/stdc++.h>
using namespace std;
//the below function returns what is the maximum value you can achieve if you have 'item rem' items left and 'capacity rem' capacity left
long long dp[101][1000005]; //this is a memoization table which store the item remaining in the row and capacity remaining in the column
long long int maxvalue(vector<int>& weights, vector<int>& values, int itemrem, int capacityrem) {
    if (dp[itemrem][capacityrem] != 0) return dp[itemrem][capacityrem];
    if (itemrem == 0) return 0;
    if (weights[itemrem] <= capacityrem) {
        return dp[itemrem][capacityrem] = max(maxvalue(weights, values, itemrem - 1, capacityrem), maxvalue(weights, values, itemrem - 1, capacityrem - weights[itemrem]) + values[itemrem]);
    }
    if (weights[itemrem] > capacityrem) {
        return dp[itemrem][capacityrem] = maxvalue(weights, values, itemrem - 1, capacityrem);
    }
}

int main() {
    //memset(dp, -1, sizeof(dp));
    int n, capacity;
    cin >> n >> capacity;
    vector<int> weights(n + 1);
    vector<int> values(n + 1);
    for (int i = 1; i < n + 1; ++i)
    {
        cin >> weights[i] >> values[i];
    }
    cout << maxvalue(weights, values, n, capacity) << endl;




    return 0;
}