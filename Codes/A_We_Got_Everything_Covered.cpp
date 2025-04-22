#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        char s[1000];
        for (int i = 0;i < k;i++) {
            s[i] = 'a' + i;
        }
        s[k] = '\0';


        for (int i = 0;i < n;i++) {

            cout << s;
            strrev(s);

        }
        cout << endl;
    }


    return 0;
}