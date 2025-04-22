#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string works;
        cin >> works;
        vector<char> uniqtask;
        char current = works[0];
        int flag = 0;
        for (int i = 1;i < n;i++) {
            if (find(uniqtask.begin(), uniqtask.end(), works[i]) != uniqtask.end()) {
                flag = 1;
                break;
            }
            if (works[i] != current) {
                uniqtask.push_back(current);
                current = works[i];
            }

        }
        if (flag) {
            cout << "NO" << endl;

        }
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}