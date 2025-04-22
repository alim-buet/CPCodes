//stalk korchen keno bhai? gorib manush
#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"Yes"<<endl;
#define no      cout<<"No"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, c;
        cin >> a >> c;
        int l, b;
        l = max(a, c);
        b = min(a, c);
        if (l % 2 && b % 2) no
        else {
            if (l % 2 | b % 2) {
                if (l == 2 * b) no
                else yes
            }
            else yes
        }



    }
    return 0;
}//