#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> eventickes;
    vector<string> oddtickets;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        
        if (s.length() % 2 == 0) eventickes.push_back(s);
        else oddtickets.push_back(s);
    }
    int total = 0;
    cout << total << endl;




    return 0;
}