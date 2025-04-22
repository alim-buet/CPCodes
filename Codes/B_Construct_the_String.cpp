#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        char ch = (char) 97;
        if(b==a) {
            

            for(int i=0;i<n;i++){
                cout<<(char)(ch+ i%26) ;
            }
        }
        else{
            for(int i=0;i<n;i++){
                cout<<char(ch+ (i%b)%26);
            }
        }
        cout<<endl;
        
    }
    
    

    
    
    return 0;
}