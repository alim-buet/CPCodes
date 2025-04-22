#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"Yes"<<endl;
#define no      cout<<"No"<<endl;
int main() {
    string s;
    cin >> s;
    queue<char> openings;
    int flag = 1;
    for (auto el : s) {
        if (el == '(') {
            openings.push(el);
        }
        else {
            if (openings.empty() == true) {
                flag = 0;
                break;
            }
            else {
                openings.pop();
            }
        }

    }
    if (flag == 0 || openings.empty() != true) {
        no
    }
    else yes
        return 0;
}