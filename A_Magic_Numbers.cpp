#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl

int main() {
    string s;
    cin >> s;
    int len = s.length();
    s[len] = '0';
    s[len + 1] = '0';
    int flag = 1;
    for (int i = 0; i < len; i++)
    {

        if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4') {
            i += 2;

        }
        else if (s[i] == '1' && s[i + 1] == '4') {
            i++;
        }
        else if (s[i] == '1') {
            continue;
        }
        else {
            flag = 0;
            break;
        }
    }
    if (flag) yes;
    else no;



    return 0;
}