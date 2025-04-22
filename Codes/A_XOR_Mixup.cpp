#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        int ans;
        for (int i = 0; i < n; i++)
        {
            ans = 0;
            for (int j = 0; (j < n) && (j != i); j++)
            {
                ans ^= arr[j];
            }
            if(ans==arr[i]){
                break;
            }


        }
        cout<<ans<<endl;
        


    }

    return 0;
}