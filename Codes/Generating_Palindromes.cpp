#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
int lcslen(string& s, string& rev, int i, int j, vector<vector<int>>& dp) {
    if (i < 0 or j < 0) return 0;//if we exhust one of the string there is not common string to be found
    if (dp[i][j] != -1) return dp[i][j];
    //for any position if they do not match 
    if (s[i] != rev[j]) {
        return dp[i][j] = max(lcslen(s, rev, i - 1, j, dp), max(lcslen(s, rev, i, j - 1, dp), lcslen(s, rev, i - 1, j - 1, dp)));
    }
    //if matches
    return dp[i][j] = 1 + lcslen(s, rev, i - 1, j - 1, dp);
}

int main() {
    int t;
    cin >> t;
    for (int c = 1;c <= t;c++) {
        string s;
        cin >> s;
        string rev = s;
        reverse(rev.begin(), rev.end());
        //we gotta find the length of lcs between s and rev
        int i, j;
        i = j = s.size() - 1;
        vector<vector<int>> dp(i + 1, vector<int>(i + 1, -1));
        //dp[i][j] is the length of lcs if we consider the first string till ith and second string till //jth index

        int lcs = lcslen(s, rev, i, j, dp);
        cout << "Case " << c << ": " << (s.size() - lcs) << endl;



    }
    return 0;
}