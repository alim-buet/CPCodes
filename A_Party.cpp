#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int n;
    cin >> n;
    vector<int> whoisyourboss(n+1);
    vector<int> currentbosses(n+1);
    for (int i = 1; i < n+1; i++)
    {
        int x;
        cin>>x;
        if(x==-1){
            currentbosses.push_back(i);
            
        }
        else{
            whoisyourboss.push_back(x);
        }
        
    }
    int groups = 1;
    while ((whoisyourboss.size()!=0))
    {
        vector<int> tempboss;
        for(auto el: whoisyourboss){
            if(!find(currentbosses.begin(),currentbosses.end(),el)==NULL){
                tempboss.push_back();

            }
        }
        
        
    }
    








    return 0;
}