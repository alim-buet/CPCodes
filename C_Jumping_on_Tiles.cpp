//stalk koren ken bhai?
#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        vector<vector<int>> indexofchar(300);

        for (int i = 0;i < n;i++) {
            indexofchar[s[i]].push_back(i);
        }
        int cost = abs(s[n - 1] - s[0]), m = 0;
        for (int i = 0;i < n;i++) {
            if (s[i] >= min(s[0], s[n - 1]) && s[i] <= max(s[0], s[n - 1])) m++;
        }
        cout << cost << " " << m << endl;


        if (s[0] < s[n - 1]) {

            //shamne jabe

            for (int i = s[0];i <= s[n - 1];i++) {
                if (!indexofchar[i].empty()) {
                    for (auto el : indexofchar[i]) cout << el + 1 << " ";
                }
            }
            cout << endl;
        }
        else {

            for (int i = s[0];i >= s[n - 1];i--) {
                if (!indexofchar[i].empty()) {
                    for (auto el : indexofchar[i]) cout << el + 1 << " ";
                }

            }
            cout << endl;

        }
    }
    return 0;
}