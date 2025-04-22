#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int dp[6000];
int change(int amount ,vector<int> &coins){
    if(dp[amount]!=0) dp[amount];
    if(amount==0) return 1;
    int ways = 0;
    for(int coin : coins){
       if(amount-coin >=0) ways+= change(amount-coin,coins);
    }
    return dp[amount] = ways;

}

int main(){
    int n;
    cin>>n;
    int amount;
    cin>>amount;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin>>coins[i];
    }
    

    
    return 0;
}