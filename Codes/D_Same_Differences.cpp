#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        map<int,int> m;
        long long ans=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            x-=i;
            ans+=m[x];
            m[x]++;

        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}