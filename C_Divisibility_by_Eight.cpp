#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    string num;cin >> num;
    vector<string> potentialAns;
    int n = num.size();
    for (int i = 0;i < 1000;i += 8) {
        potentialAns.push_back(to_string(i));
    }
    int isfound = 0;
    for (string candidateNum : potentialAns) {
        int ind = 0;
        int isThisTheOne = 1;
        for (char d : candidateNum) {
            int isPresent = 0;
            for (ind;ind < n;ind++) {
                if (num[ind] == d) {
                    isPresent = 1;
                    ind++;
                    break;
                }
            }
            if (isPresent == 0) {
                isThisTheOne = 0;
                break;
            }

        }
        if (isThisTheOne) {
            yes
                cout << candidateNum << endl;
            isfound = 1;
            break;
        }


    }
    if (isfound == 0) {
        no

    }



}

int main() {
    solve();
    return 0;
}