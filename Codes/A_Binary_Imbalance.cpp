#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ones = 0, zeros = 0;
        for (auto ch : s)
        {
            if (ch == '0') zeros++;
            else ones++;
        }
        if (zeros > ones) yes
        else {
            if (ones == n) no
            else yes
        }


    }

    return 0;
}