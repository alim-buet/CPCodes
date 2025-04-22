#include<bits/stdc++.h>
using namespace std;
long long dp[105][1000005];
long long minweightneeded(long long weights[], long long val[], int val_left, int ind) {
    if (dp[ind][val_left] != -1) return dp[ind][val_left];
    if (ind < 0) return (val_left == 0) ? 0 : 1e15;

    // Calculate the minimum weight needed without adding the current item
    long long withoutCurrent = minweightneeded(weights, val, val_left, ind - 1);

    // Calculate the minimum weight needed by adding the current item
    long long withCurrent = (val_left >= val[ind]) ? minweightneeded(weights, val, val_left - val[ind], ind - 1) + weights[ind] : 1e15;

    // Store the result in dp array and return the minimum of both cases
    return dp[ind][val_left] = min(withoutCurrent, withCurrent);
}

int main(){
  memset(dp,-1,sizeof(dp));
  int n,capacity;
  cin>>n>>capacity;
  long long weights[n],val[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>weights[i]>>val[i];
  }
  for (int i = 1000001; i >=0; i--)
  {
    if(minweightneeded(weights, val, i, n-1)<=capacity){
      cout<<i<<endl;
    }
  }

  return 0;
}