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
        stack<char> bowl;
        for (char ch : s) {
            if (bowl.empty()) {
                bowl.push(ch);

            }
            else {
                if (bowl.top() != ch) {
                    bowl.pop();
                }
                else {
                    bowl.push(ch);
                }
            }
        }
        cout << bowl.size() << endl;
    }

    return 0;
}