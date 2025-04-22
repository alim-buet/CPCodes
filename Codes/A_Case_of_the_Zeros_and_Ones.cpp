#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> nums;

    for (auto ch : s) {
        if (nums.empty()) nums.push(ch);
        else {
            if (nums.top() != ch) {
                nums.pop();

            }
            else {
                nums.push(ch);
            }
        }

    }
    cout << nums.size() << endl;
    return 0;
}