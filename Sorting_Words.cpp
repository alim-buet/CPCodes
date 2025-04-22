#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> sentences;
        string sent;
        for (int i = 0;i < n;i++) {
            cin >> sent;
            sentences.push_back(sent);
            // cout << sent << endl;
        }
        sort(sentences.begin(), sentences.end());
        for (const string& bakko : sentences) {
            cout << bakko << endl;
        }
        
    }
    return 0;
}