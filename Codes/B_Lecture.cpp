#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> words;
    for (int i = 0;i < m;i++) {
        string l1, l2;
        cin >> l1 >> l2;
        if (l1.length() <= l2.length()) {
            words[l1] = l1;
        }
        else {
            words[l1] = l2;
        }
    }
    for (int i = 0;i < n;i++) {
        string s;
        cin >> s;
        cout << words[s] << " ";
    }
    return 0;
}