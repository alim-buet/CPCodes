#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    string num;
    cin >> num;
    if (num[0] != '9' && num[0] > '4') num[0] = '0' + '9' - num[0];
    for (int i = 1;i < num.size();i++) {
        if (num[i] > '4') num[i] = '0' + '9' - num[i];
    }
    cout << num << endl;

    return 0;
}